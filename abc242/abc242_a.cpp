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
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  float ans = 0.0;
  if(x <= a) ans = 1.0;
  else if(x <= b) ans = 1.0 * c / (b - a);

  cout << fixed << setprecision(7);
  cout << ans << endl;
}