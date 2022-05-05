#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = atcoder::modint998244353;
//using mint = atcoder::modint1000000007; //必要に応じてmodintを選択

int main() {
  int n;
  cin >> n;

  mint ans = 0;

  mint dp[n+1][10];
  memset(dp, 0, sizeof(dp));
  rep1(i, 9) dp[1][i] = 1;

  rep1(i, n-1){
    rep1(j, 9){
      if(j == 1){
        dp[i+1][1] += dp[i][1] + dp[i][2];
      }
      else if(j == 9){
        dp[i+1][9] += dp[i][8] + dp[i][9];
      }
      else{
        dp[i+1][j] += dp[i][j-1] + dp[i][j] + dp[i][j+1];
      }
    }
  }

  rep1(i, 9){
    ans += dp[n][i];
  }
  
  cout << ans.val() << endl;
}