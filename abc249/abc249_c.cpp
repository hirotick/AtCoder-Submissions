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
  int n, k, l, m, num;
  cin >> n >> k;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int alp = 26;
  int ans = 0, now = 0;

  rep(i, (1<<n)){

    vector<int> t(alp, 0);
    now = 0;

    rep(j, n){
      if((i>>j)&1){
        for(auto c : s[j]) t[c - 'a']++;
      }
    }

    rep(j, alp){
      if(t[j] == k) now++;
    }

    ans = max(ans, now);
  }

  cout << ans << endl;
}