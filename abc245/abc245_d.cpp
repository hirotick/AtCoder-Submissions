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
  vector<int> a(n+1), b(m+1), c(n+m+1);

  rep(i, n+1) cin >> a[i];
  rep(i, n+m+1) cin >> c[i];

  for(int i=m;i>=0;i--){
    b[i] = c[n+i] / a[n];

    rep(j, n){
      c[n+i-1-j] -= b[i] * a[n-1-j];
    }
  }

  for(int i=0;i<=m;i++){
    cout << b[i];
    if(i != m) cout << " ";
  }
  cout << endl;
}