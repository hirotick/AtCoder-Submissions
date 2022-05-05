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
  int n, ans;
  cin >> n;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> cnt(2001, 0);
  rep(i, n){
    cnt[a[i]]++;
  }
  rep(i, 2001){
    if(cnt[i] == 0){
      ans = i;
      break;
    }
  }
  cout << ans << endl;

}