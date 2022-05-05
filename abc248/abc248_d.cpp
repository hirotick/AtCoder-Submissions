#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int n, l, r, x, q, lnum, rnum;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  cin >> q;

  map<int, vector<int>> cnt;
  rep(i, n) cnt[a[i]].push_back(i+1);

  rep(i, q){
    cin >> l >> r >> x;
    rnum = upper_bound(cnt[x].begin(), cnt[x].end(), r) - cnt[x].begin();
    lnum = lower_bound(cnt[x].begin(), cnt[x].end(), l) - cnt[x].begin();
    cout << rnum - lnum << endl;
  }
}