#include <algorithm>
#include <bitset>
#include <complex>
#include <cstring>
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

#define M 1000001
#define L 14

char H[M][L];

int getChar(char ch) {
  if (ch == 'A')
    return 1;
  else if (ch == 'C')
    return 2;
  else if (ch == 'G')
    return 3;
  else if (ch == 'T')
    return 4;
}

/* convert a string into an integer value */
long long getKey(char str[]) {
  long long sum = 0, p = 1, i;
  for (i = 0; i < strlen(str); i++) {
    sum += p * (getChar(str[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key) { return key % M; }
int h2(int key) { return key % M; }

int find(char str[]) {
  ll key, i, h;
  key = getKey(str);
  for (i = 0;; ++i) {
    h = (h1(key) + i * h2(key)) % M;
    if (strcmp(H[h], str) == 0)
      return 1;
    else if (strlen(H[h]) == 0)
      return 0;
  }
}

int insert(char str[]) {
  ll key, i, h;
  key = getKey(str);
  for (i = 0;; ++i) {
    h = (h1(key) + i * h2(key)) % M;
    if (strcmp(H[h], str) == 0)
      return 1;
    else if (strlen(H[h]) == 0) {
      strcpy(H[h], str);
      return 0;
    }
  }
}

int main() {
  int i, n;
  char str[L], com[9];
  for (i = 0; i < M; i++)
    H[i][0] = '\0';

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%s %s", com, str);

    if (com[0] == 'i') {
      insert(str);
    } else {
      if (find(str)) {
        printf("yes\n");
      } else {
        printf("no\n");
      }
    }
  }

  return 0;
}
