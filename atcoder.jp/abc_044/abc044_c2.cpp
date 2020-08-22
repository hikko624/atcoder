// abc044_c
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <unordered_map>
#include <unordered_set>
#endif

template <typename A, typename B>
bool cmin(A &a, const B &b)
{
  return a > b ? (a = b, true) : false;
}
template <typename A, typename B>
bool cmax(A &a, const B &b)
{
  return a < b ? (a = b, true) : false;
}
const double PI = acos(-1);
const double EPS = 1e-9;
int inf = sizeof(int) == sizeof(long long) ? 2e18 : 1e9 + 10;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
// ll dp[60][60][2700] = {0};
// ll N, A;

// メモ化する前のコード
//
// ll solve(vector<ll> &vx, ll offset, ll n, ll sum)
// {
//   if (offset == vx.size())
//   {
//     return sum == 0 && n == 0;
//   }

//   return solve(vx, offset + 1, n, sum) +
//          solve(vx, offset + 1, n - 1, sum - vx[offset]);
// }

// 1. まずはメモ化とか気にせずに素直に全探索のコードを書きます．．．．
// 2. 小さいケースで動くことを確認できたらメモ化
// `vx`の`offset`番目以降から **丁度** `n` 個選んで和を `sum`にする場合の数
ll solve(vector<ll> &vx, ll offset, ll n, ll sum, vector<vector<vector<ll>>> &memo)
{
  if (offset == vx.size())
  {
    return sum == 0 && n == 0;
  }

  if (sum < 0 || n < 0)
  {
    return 0;
  }

  if (memo[offset][n][sum] == -1)
  {
    // vx[offset]を選ぶ場合の数 + vx[offset]を選ばない場合の数が答えになる
    // n枚のカード(offset以降)で和をsumにする場合の数
    // → solve(vx, offset + 1, n, sum, memo)
    //
    // vx[offset]とその他n-1枚のカード(offset以降)で和をsumにする場合の数
    // → solve(vx, offset + 1, n - 1, sum - vx[offset], memo)

    memo[offset][n][sum] = solve(vx, offset + 1, n, sum, memo) +
                           solve(vx, offset + 1, n - 1, sum - vx[offset], memo);
  }

  return memo[offset][n][sum];
}

int main()
{
  ll n, a;
  cin >> n >> a;
  vector<ll> vx(n);
  for (auto &x : vx)
  {
    cin >> x;
  }
  // rep(i, N) cin >> X[i + 1];

  // メモ
  vector<vector<vector<ll>>> memo(
      60, vector<vector<ll>>(60, vector<ll>(60 * 60, -1)));
  ll ans = 0;
  for (int i = 1; i <= n; ++i)
  {
    ans += solve(vx, 0, i, a * i, memo);
  }

  cout << ans << '\n';

  // rep(i, 60) { rep(j, 60) { rep(k, 2600) { dp[i][j][k] = 0; } } }
  // dp[0][0][0] = 1;
  // for (int i = 0; i < N; ++i)
  // {
  //   for (int j = 0; j < N; ++j)
  //   {
  //     for (int k = 0; k < 2600; ++k)
  //     {
  //       dp[i + 1][j][k] = dp[i][j][k];
  //       dp[i + 1][j + 1][k + X[i]] = dp[i][j + 1][k + X[i]] + dp[i][j][k];
  //     }
  //   }
  // }
  // ll ans = 0;
  // for (int i = 1; i < N; ++i)
  // {
  //   ans += dp[N][i][i * A];
  // }
  // cout << ans << endl;
  return 0;
}
