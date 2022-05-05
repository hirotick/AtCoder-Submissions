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
  string s;
  cin >> s;

  int l = s.length();
  vector<int> asc;
  rep(i, l) asc.push_back(s[i] - 'a');
  sort(asc.begin(), asc.end());
  rep(i, l) asc[i] = asc[i] + 'a';
  rep(i, l) cout << (char)(asc[i]);
  cout << endl;
}