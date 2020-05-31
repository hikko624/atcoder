// arc084_a
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

int main()
{
  // int n;
  // vector<int> a,b,c;
  // cin>>n;
  // a=b=c=vector<int>(n);
  // for (int i=0;i<n;++i) {

  // }
  // 基本的な用途
  // ソート済み範囲から、特定の値を二分探索で見つける
  {
    std::vector<int> v = {3, 1, 4, 6, 5};
    std::sort(v.begin(), v.end());

    // 二分探索で値4を検索
    decltype(v)::iterator it = std::lower_bound(v.begin(), v.end(), 6);
    if (it != v.end() && *it == 4) { // lower_boundでは4"以上"の値が見つかるので、
                                     // 値4を見つけたいなら検索結果の値を比較する必要がある
      std::size_t pos = std::distance(v.begin(), it);
      std::cout << *it << " pos=" << pos << std::endl;
    }
  }
  return 0;
}
