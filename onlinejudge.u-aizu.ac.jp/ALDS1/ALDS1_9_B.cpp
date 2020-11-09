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
#define MAX 2000000
using namespace std;
using ll = long long;
using P = pair<int, int>;

int H, A[MAX+1];

void maxHeapify(int i) {
  int left, right, largest;
  left = 2 * i;
  right = 2 * i + 1;

  if (left <= H && A[left] > A[i]) largest = left;
  else largest = i;

  if (right <= H && A[right] > A[largest]) largest = right;

  if (largest != i) {
    swap(A[i], A[largest]);
    maxHeapify(largest);
  }
}

int main()
{
  cin >> H;
  for(int i = 1; i <= H; ++i) cin >> A[i];
  for(int i = H / 2; i >= 1; --i) maxHeapify(i);
  for(int i = 1; i <= H; ++i) {
    cout << " " << A[i];
  }
  cout << endl;

  return 0;
}
