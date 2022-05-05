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
  int n, cnt;
  cin >> n;

  vector<string> s(n);
  rep(i, n) cin >> s[i];

  bool ans = false;

  rep(i, n){
    rep(j, n){
      if(j + 6 <= n){
        cnt = 0;
        for(int k = 0; k <= 5;k++){
          if(s[i][j+k] == '.') cnt++;
        }
        if(cnt <= 2){
          ans = true;
          break;
        }
      }
      if(i + 6 <= n){
        cnt = 0;
        for(int k = 0;k <= 5;k++){
          if(s[i+k][j] == '.') cnt++;
        }
        if(cnt <= 2){
          ans = true;
          break;
        }
      }
      if(i + 6 <= n && j + 6 <= n){
        cnt = 0;
        for(int k = 0; k <= 5; k++){
          if(s[i+k][j+k] == '.') cnt++;
        }
        if(cnt <= 2){
          ans = true;
          break;
        }
      }
      if(i - 5 >= 0 && j + 6 <= n){
        cnt = 0;
        for(int k=0;k<=5;k++){
          if(s[i-k][j+k] == '.') cnt++;
        }
        if(cnt <= 2){
          ans = true;
          break;
        }
      }
    }
    if(ans) break;
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}