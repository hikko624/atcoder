#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  int n, p, q;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; ++i) {
    cin >> x.at(i) >> y.at(i);
  }
  return 0;
}
