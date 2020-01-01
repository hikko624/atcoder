// abc067_b
#include <algorithm>
#include <assert.h>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <typeinfo>
#include <unordered_map>
#include <utility>
#include <vector>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rep(i, a) loop(i, 0, a)
#define FOR(i, a) for (auto i : a)
#define pb push_back
#define all(in) in.begin(), in.end()
#define shosu(x) fixed << setprecision(x)
#define show1d(v)                                                              \
  rep(i, v.size()) cout << " " << v[i];                                        \
  cout << endl << endl;
#define show2d(v)                                                              \
  rep(i, v.size()) {                                                           \
    rep(j, v[i].size()) cout << " " << v[i][j];                                \
    cout << endl;                                                              \
  }                                                                            \
  cout << endl;
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def, Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<Def, pii> pip;
typedef vector<pip> vip;
template <typename A, typename B> bool cmin(A &a, const B &b) {
  return a > b ? (a = b, true) : false;
}
template <typename A, typename B> bool cmax(A &a, const B &b) {
  return a < b ? (a = b, true) : false;
}
const double PI = acos(-1);
const double EPS = 1e-9;
Def inf = sizeof(Def) == sizeof(long long) ? 2e18 : 1e9 + 10;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
int main(int argc, char *argv[]) {
  int n, k, sum = 0;
  cin >> n >> k;
  vi l(n);
  rep(i, n) { cin >> l.at(i); }
  sort(l.rbegin(), l.rend());
  rep(i, k) { sum += l.at(i); }
  cout << sum << endl;
  return 0;
}
