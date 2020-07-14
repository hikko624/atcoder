// aabc172_d
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

template <typename T, typename = typename std::enable_if<
                          std::is_integral<T>::value, T>::type>

vector<pair<T, ll>> prime_factorize(T n) {
  vector<pair<T, ll>> cnts{};
  if (n == 1) {
    return cnts;
  }

  T a = 2;
  while (n >= a * a) {
    int cnt = 0;
    while (n % a == 0) {
      n /= a;
      cnt++;
    }

    if (cnt > 0) {
      cnts.push_back({a, cnt});
    }

    a++;
  }

  if (n != 1) {
    cnts.push_back({n, 1});
  }
  return cnts;
}

int main() {
  ll N;
  cin >> N;
  ll ans = 0;
  for (ll i = 1; i <= N; ++i) {
    vector<pair<ll, ll>> prime = prime_factorize(i);
    ll cnt = 1;
    for (auto x : prime) {
      cnt += x.second;
    }
    ans += i * cnt;
  }
  cout << ans << endl;
  return 0;
}
