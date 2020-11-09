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

#define MAX 10000
#define NIL -1

struct Node {
  int parent, left, right;
};
struct Node T[MAX];
int N;

void preParse(int u) {
  if (u == NIL) return;
  cout << " " << u;
  preParse(T[u].left);
  preParse(T[u].right);
}

void inParse(int u) {
  if (u == NIL) return;
  inParse(T[u].left);
  cout << " " << u;
  inParse(T[u].right);
}

void postParse(int u) {
  if (u == NIL) return;
  postParse(T[u].left);
  postParse(T[u].right);
  cout << " " << u;
}

int main()
{
  int ID, L, R, root;
  cin >> N;
  for (int i = 0; i < N; ++i) T[i].parent = NIL;
  for (int i = 0; i < N; ++i) {
    cin >> ID >> L >> R;
    T[ID].left = L;
    T[ID].right = R;
    if (L != NIL) T[L].parent = ID;
    if (R != NIL) T[R].parent = ID;
  }

  for (int i = 0; i < N; ++i) if (T[i].parent == NIL) root = i;

  cout << "Preorder" << endl;
  preParse(root);
  cout << endl;
  cout << "Inorder" << endl;
  inParse(root);
  cout << endl;
  cout << "Postorder" << endl;
  postParse(root);
  cout << endl;

  return 0;
}
