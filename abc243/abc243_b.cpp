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
  int n;
  cin >> n;

  int cnt1 = 0, cnt2 = 0;

  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  rep(i, n){
    rep(j, n){
      if(a[i] == b[j]){
        if(i == j) cnt1++;
        else cnt2++;
      }
    }
  }
  cout << cnt1 << endl;
  cout << cnt2 << endl;
}
