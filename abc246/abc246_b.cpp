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
  int a, b;
  cin >> a >> b;
  float x, y;
  x = 1.0 * a / sqrt(pow(a, 2) + pow(b, 2));
  y = 1.0 * b / sqrt(pow(a, 2) + pow(b, 2));

  cout << fixed << setprecision(7);
  cout << x << " " << y << endl;
}