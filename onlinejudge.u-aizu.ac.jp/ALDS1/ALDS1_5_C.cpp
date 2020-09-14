#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
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

struct Point {
  double x, y;
};

void koch(int d, Point a, Point b) {
  if (d == 0)
    return;

  Point s, t, u;
  double th = PI * 60.0 / 180.0;

  s.x = (2.0 * a.x + 1.0 * b.x) / 3.0;
  s.y = (2.0 * a.y + 1.0 * b.y) / 3.0;
  t.x = (1.0 * a.x + 2.0 * b.x) / 3.0;
  t.y = (1.0 * a.y + 2.0 * b.y) / 3.0;
  u.x = (t.x - s.x) * cos(th) - (t.y - s.y) * sin(th) + s.x;
  u.y = (t.x - s.x) * sin(th) + (t.y - s.y) * cos(th) + s.y;

  koch(d - 1, a, s);
  cout << fixed << setprecision(8);
  cout << s.x << " " << s.y << endl;
  koch(d - 1, s, u);
  cout << u.x << " " << u.y << endl;
  koch(d - 1, u, t);
  cout << t.x << " " << t.y << endl;
  koch(d - 1, t, b);
}

int main() {
  int N;
  cin >> N;
  Point a, b;


  a.x = 0;
  a.y = 0;
  b.x = 100;
  b.y = 0;

  cout << fixed << setprecision(8);
  cout << a.x << " " << a.y << endl;
  koch(N, a, b);
  cout << b.x << " " << b.y << endl;
  return 0;
}
