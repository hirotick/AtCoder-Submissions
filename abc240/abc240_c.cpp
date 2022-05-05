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
  int n, x;
  cin >> n >> x;
  vector<int> a(n), b(n);
  rep(i, n){
    cin >> a[i] >> b[i];
    //cout << a[i] << b[i] << endl;
  }

  bool dp[n+1][x+1];
  memset(dp, false, sizeof(dp));
  dp[0][0] = true;

  rep(i, n){
    rep(j, x+1){
      if(dp[i][j]){
        if(j + a[i] <= x){
          dp[i+1][j+a[i]] = true;
        }
        if(j + b[i] <= x){
          dp[i+1][j+b[i]] = true;
        }
      }
    }
  }
  
  /*
  rep(i,n+1){
    rep(j, x+1){
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }
  */

  if(dp[n][x]) cout << "Yes" << endl;
  else cout << "No" << endl;
}