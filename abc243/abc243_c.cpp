#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
//using mint = atcoder::modint998244353;
//using mint = atcoder::modint1000000007; //必要に応じてmodintを選択

int main() {
  ll n, x, y, rmin, lmax;
  cin >> n;
  bool ans  = false;

  vector<pair<ll, ll>> point;
  rep(i, n){
    cin >> x >> y;
    point.push_back(make_pair(x, y));
  }

  string s;
  cin >> s;

  map<ll, vector<pair<ll, char>>> pm;
  rep(i, n){
    pm[point[i].second].push_back(make_pair(point[i].first, s[i]));
  }

  vector<pair<ll, char>> v;
  for(auto p : pm){

    v = p.second;
    lmax = 0LL;
    rmin = pow(10,9);
    for(auto u : v){
      if(u.second == 'R'){
        rmin = min(rmin, u.first);
      }
      else{
        lmax = max(lmax, u.first);
      }
    }
    //cout << rmin << " " << lmax << endl;
    if(lmax > rmin){
      ans = true;
      break;
    }
  }

  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}