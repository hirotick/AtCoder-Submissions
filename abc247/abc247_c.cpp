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
  int n; cin >> n;
  vector<string> s(n+1);

  rep1(i, n){
    if(i == 1) s[1] = "1";
    else{
      s[i] = s[i-1] + " " + to_string(i) + " " + s[i-1];
    }
  }

  cout << s[n] << endl;
}