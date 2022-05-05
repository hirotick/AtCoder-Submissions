#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  ll a, b, k;
  cin >> a >> b >> k;

  int cnt = 0;
  bool under = (a==b ? false:true);
  while(under){
    a *= k;
    cnt++;
    if(a >= b){
      under = false;
      break;
    }
  }
  cout << cnt << endl;
}