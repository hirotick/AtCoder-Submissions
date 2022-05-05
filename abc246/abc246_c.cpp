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

  ll n, k, x;
  cin >> n >> k >> x;

  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n){
    if(k > 0 && a[i] >= x){
      if(k >= a[i]/x){
        k -= a[i]/x;
        a[i] -= x * (a[i]/x);
        //cout << "k:" << k << endl;
      }
      else{
        a[i] -=  x * k;
        k = 0;
      }
    }
    //cout << "a[i]:" << a[i] << endl;
  }
  //cout << "k:" << k << endl;

  sort(a.begin(), a.end());
  
  if(k > 0) n -= k;
  ll ans = 0LL;

  rep(i, n){
    ans += a[i];
  }

  cout << ans << endl;
}