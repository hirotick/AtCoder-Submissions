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
  vector<char> s(3), t(3);
  rep(i, 3) cin >> s[i];
  rep(i, 3) cin >> t[i];

  bool can = true, sb, tb;
  int sRnum, tRnum;
  char c;

  auto sRitr = find(s.begin(), s.end(), 'R');
  sRnum = sRitr - s.begin();
  if(sRnum == 2) sRnum = -1;
  if(s[sRnum+1] == 'G') sb = true;
  else sb = false;

  auto tRitr = find(t.begin(), t.end(), 'R');
  tRnum = tRitr - t.begin();
  if(tRnum == 2) tRnum = -1;
  if(t[tRnum + 1] == 'G') tb = true;
  else tb = false;

  if(!(sb^tb)) cout << "Yes" << endl;
  else cout << "No" << endl;
}