#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
//using mint = atcoder::modint998244353;
//using mint = atcoder::modint1000000007; //必要に応じてmodintを選択

ll func(ll a, ll b){
  return (a*a*a + a*a*b + a*b*b + b*b*b);
}

int main() {
  ll n, ans = pow(10, 18);
  cin >> n;

  ll j = pow(10,6);
  for(ll i=0;i<=pow(10, 6);i++){
    while(func(i, j)>=n && j>=0){
      ans = min(ans, func(i, j));
      j--;
    }
  }

  cout << ans << endl;
  return 0;
}