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

#define MAX 100005
#define NIL -1

struct Node {
  int parent, left, right;
};

Node T[MAX];
int N, D[MAX];

void print(int u) {
  cout << "node " << u << ": ";
  cout << "parent = " << T[u].parent << ", ";
  cout << "depth = " << D[u] << ", ";

  if (T[u].parent == NIL)
    cout << "root, ";
  else if (T[u].left == NIL)
    cout << "leaf, ";
  else
    cout << "internal node, ";

  cout << "[";

  for (int i = 0, c = T[u].left; c != NIL; ++i, c = T[c].right) {
    if (i) cout << ", ";
    cout << c;
  }
  cout << "]" << endl;
}

void rec(int u, int p) {
  D[u] = p;
  if (T[u].right != NIL) rec(T[u].right, p);
  if (T[u].left != NIL) rec(T[u].left, p + 1);
}

int main() {
  int N, ID, K, C, l, r;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    T[i].parent = T[i].left = T[i].right = NIL;
  }

  for (int i = 0; i < N; ++i) {
    cin >> ID >> K;
    for (int j = 0; j < K; ++j) {
      cin >> C;
      if (j == 0) T[ID].left = C;
      else T[l].right = C;
      l = C;
      T[C].parent = ID;
    }
  }
  for (int i = 0; i < N; ++i) {
    if (T[i].parent == NIL) r = i;
  }
  rec(r, 0);

  for (int i = 0; i < N; ++i) print(i);

  return 0;
}
