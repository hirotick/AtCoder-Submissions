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

  string t;
  cin >> t;

  int x = 0, y = 0, cnt = 0;
  vector<int> d = {1, 0};

  rep(i, n){
    if(t[i] == 'S'){
      x += 1 * d[0];
      y += 1 * d[1];
    }

    else{//t[i] == "R"
      if(cnt%4 == 0) d = {0, -1};
      else if(cnt%4 == 1) d = {-1, 0};
      else if(cnt%4 == 2) d = {0, 1};
      else d = {1, 0};
      cnt++;
    }
  }
  cout << x << " " << y << endl;
}