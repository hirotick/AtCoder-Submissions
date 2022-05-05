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
  int n;
  cin >> n;

  vector<string> s(n), t(n);
  rep(i, n) cin >> s[i] >> t[i];

  bool can = true, ans = true;

  string nn;
  rep(i, n){
    rep(j, 2){
      can = true;
      nn = (j == 0 ? s[i] : t[i]);
      rep(k, n){
        if(i != k && (nn == s[k] || nn == t[k])){
          can = false;
          break;
        }
      }
      if(can) break;
    }

    if(!can){
      ans = false;
      break;
    }
  }

  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}