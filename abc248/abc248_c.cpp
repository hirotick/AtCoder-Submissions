#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = atcoder::modint998244353;


int main() {
  int n, m, k;
  cin >> n >> m >> k;
  mint dp[n+2][k+2] = {0}; //dp[i][j] : i項までの数の合計がjになる数列の個数
  
  dp[0][0] = 1;
  rep(i, n){
    rep(j, k){
      rep1(l, m){
        if(j+l <= k){
          dp[i+1][j+l] += dp[i][j];
        }
      }
    }
  }
  
  mint ans = 0;
  rep(i, k+1){
    ans += dp[n][i];
  }

  cout << ans.val() << endl;
}