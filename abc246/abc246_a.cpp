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
  vector<int> x(3), y(3);
  rep(i, 3) cin >> x[i] >> y[i];

  int xans = x[0]^x[1]^x[2];
  int yans = y[0]^y[1]^y[2];

  cout << xans << " " << yans << endl;
}