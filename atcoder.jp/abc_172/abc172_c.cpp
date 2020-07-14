// aabc172_c
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

int main() {
  int N, M;
  ll K, sum=0;
  cin >> N >> M >> K;
  vector<ll> A(N + 1, inf), B(M + 1, inf);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  int cntA = 0, cntB = 0;
  while (K >= sum && cntA + cntB < N + M) {
    if (A[cntA] <= B[cntB] && A[cntA] != inf) {
      sum += A[cntA];
      cntA++;
      if (sum >= K) break;
    }

    if (A[cntA] >= B[cntB] && B[cntB] != inf) {
      sum += B[cntB];
      cntB++;
      if (sum >= K) break;
    }
  }

  if (sum > K) cout << cntA + cntB - 1<< endl;
  else cout << cntA + cntB << endl;
  return 0;
}
