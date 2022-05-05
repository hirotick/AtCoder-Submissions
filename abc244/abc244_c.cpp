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
  int n, m, p;
  cin >> n;
  bool can = true;
  vector<int> cnt(2*n+2, 0);
  cnt[0] = true;
  cout << 2*n+1 << endl;
  
  while(can){
    cin >> m;
    if(m == 0){
        can = false;
        break;
    }
    else{
        cnt[m] = 1;
        auto itr = find(cnt.begin(), cnt.end(), 0);
        if(itr == cnt.end()){
            can = false;
            break;
        }
        else{
            p = itr - cnt.begin();
            cnt[p] = 1;
            cout << p << endl;
        }
    }
  }
}