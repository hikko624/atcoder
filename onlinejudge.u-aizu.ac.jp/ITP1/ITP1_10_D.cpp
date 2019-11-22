#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <limits>
using namespace std;

int main(int argc, char *argv[])
{
  int n;
  double p1 = 0.0, p2 = 0.0, p3 = 0.0, pinf = 0.0;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; ++i) {
    cin >> x.at(i);
  }
  for (int i = 0; i < n; ++i) {
    cin >> y.at(i);
  }
  for (int i = 0; i < n; ++i) {
    p1 += (double)(abs((x.at(i) - y.at(i))));
  }
  for (int i = 0; i < n; ++i) {
    p2 += pow(abs((x.at(i) - y.at(i))), 2);
  }
  for (int i = 0; i < n; ++i) {
    p3 += pow(abs(x.at(i) - y.at(i)), 3);
  }
  for(int i=0;i<n;++i){
    pinf = max((double)abs(x.at(i)-y.at(i)), pinf);
  }
  cout << fixed;
  cout << setprecision(9);
  cout << p1 << endl;
  cout << pow(p2, 1.0/2.0) << endl;
  cout << pow(p3, 1.0/3.0) << endl;
  cout << pinf << endl;
  return 0;
}
