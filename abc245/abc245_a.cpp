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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if(a < c){
    cout << "Takahashi" << endl;
  }
  else if(a == c){
    if(b <= d){
      cout << "Takahashi" << endl;
    }
    else{
      cout << "Aoki" << endl;
    }
  }
  else{
    cout << "Aoki" << endl;
  }
}