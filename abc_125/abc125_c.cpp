#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b) {
  if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main(int argc, char *argv[])
{
  int n, gcdnum = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a.at(i);
  }
  for(int j = 0; j < n; ++j) {
    gcdnum = max(gcdnum, gcd(a.at(j), a.at(n-1-j)));
  }
  cout << gcdnum << endl;
  return 0;
}
