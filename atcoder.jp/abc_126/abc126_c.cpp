#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int mul_count(int k, int n) {
  int count = 0;
  while(1) {
    if(n >= k) break;
    n *= 2;
    count++;
  }
  return count;
}

int main(int argc, char *argv[])
{
  int n, k;
  cin >> n >> k;
  double ans = 0.0;
  for (int i = 1; i <= n; ++i) {
    ans += (1.0 / (double)n * pow(1.0/2.0, (double)mul_count(k, i)));
  }
  cout << fixed;
  cout << setprecision(9);
  cout << ans << endl;
  return 0;
}
