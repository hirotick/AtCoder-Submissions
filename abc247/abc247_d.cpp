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
  int q; cin >> q;

  deque<pair<ll, ll>> d;
  int command, x, c;
  ll score = 0LL;

  rep(i, q){

    cin >> command;

    if(command == 1){
      cin >> x >> c;
      d.push_back(make_pair(x, c));
    }

    else{//command == 2

      cin >> c;
      score = 0LL;

      while(c > 0){
        if(d.front().second > c){
          d.front().second -= c;
          score += d.front().first * c;
          c = 0;
        }

        else{
          score += d.front().first * d.front().second;
          c -= d.front().second;
          d.pop_front();
        }

        if(c == 0){
          cout << score << endl;
          break;
        }
      }
    }

  }
  return 0;
}