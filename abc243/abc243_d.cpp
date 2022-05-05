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
  ll n, x, i=0LL, cnt=0LL;
  cin >> n >> x;
  string s;
  cin >> s;
  bool under;

  while(i < n){
    if(s[i] == 'U'){
      x /= 2LL;
      i++;
    }
    else{
      if(x*2LL > pow(10, 18)){
        cnt = 0;
        under = false;
        while(!under){
          if(s[i] == 'U') cnt--;
          else cnt++;
          i++;
          if(cnt == 0){
            under = true;
            break;
          }
        }
      }
      else{
        if(s[i] == 'L') x *= 2LL;
        else x = x*2LL+1LL;
        i++;
      }
    }
  }
  cout << x << endl;
}