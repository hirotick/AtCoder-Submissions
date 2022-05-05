#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  string s;
  cin >> s;

  int l = 9, num = 0;
  rep(i, l){
    num += s[i] - '0';
  }


  cout << 45 - num << endl;
  return 0;
}