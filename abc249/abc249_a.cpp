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
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  int aoki = 0, taka = 0;

  taka = a*b * (x / (a+c)) + b * min(a, x%(a+c));
  aoki = d*e * (x / (d+f)) + e * min(d, x%(d+f));
  
  if(taka > aoki) cout << "Takahashi" << endl;
  else if(taka == aoki) cout << "Draw" << endl;
  else cout << "Aoki" << endl;

  return 0;
}