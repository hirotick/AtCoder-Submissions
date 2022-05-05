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
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  bool ans = true;
  rep(i, m){
    auto itr = find(a.begin(), a.end(), b[i]);
    if(itr == a.end()){
      ans = false;
      break;
    }
    else{
      a.erase(itr);
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}