#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
//using mint = atcoder::modint998244353;
//using mint = atcoder::modint1000000007; //必要に応じてmodintを選択

int k;

bool func(int p, int q){
  if(abs(p-q) <= k) return true;
  else return false;
}

int main() {
  int n;
  cin >> n >> k;

  vector<int> a(n), b(n);

  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  vector<bool> ap(n+1), bp(n+1);

  ap[0] = true;
  bp[0] = true;

  rep1(i, n-1){
    ap[i] = (ap[i-1] && func(a[i], a[i-1])) || (bp[i-1] && func(a[i], b[i-1]));
    bp[i] = (ap[i-1] && func(b[i], a[i-1])) || (bp[i-1] && func(b[i], b[i-1]));
  }

  if(ap[n-1] || bp[n-1]) cout << "Yes" << endl;
  else cout << "No" << endl;
}