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
  string s;
  cin >> s;
  bool b = false, sm = false, op = true;
  map<char, int> cnt;

  int l = s.length();
  rep(i,l){
    if(s[i]-'A' >= 0 && s[i] - 'Z' <= 0){
      b = true;
    }
    if(s[i] - 'a' >= 0 && s[i] - 'z' <= 0){
      sm = true;
    }
    if(cnt.count(s[i])) op = false;
    cnt[s[i]] = 1;
  }
  if(b && sm && op) cout << "Yes" << endl;
  else cout <<"No" << endl;
}