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

template <typename A, typename B> bool cmin(A &a, const B &b) {
  return a > b ? (a = b, true) : false;
}
template <typename A, typename B> bool cmax(A &a, const B &b) {
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

static const int M = 200;

int main()
{
  int N, P[M + 1], m[M + 1][M + 1];
  cin >> N;

  for (int i = 1; i <= N; ++i) {
     cin >> P[i - 1] >> P[i];
  }

  for (int i = 1; i <= N; ++i) m[i][i] = 0;
  for (int l = 2; l <= N; ++l) {
    for (int i = 1; i <= N; ++i) {
      int j = i + l - 1;
      m[i][j] = (1 << 21);
      for (int k = i; k <= j - 1; ++k) {
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + P[i - 1] * P[k] * P[j]);
      }
    }
  }

  cout << m[1][N] << endl;
  // rep(i, N+1) {
  //   rep(j, N+1) {
  //     cout << m[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}
