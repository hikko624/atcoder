#include <iostream>
#include <cmath>
#include <iomanip>
const double PI=acos(-1);
using namespace std;

int main(int argc, char *argv[])
{
  int a, b, c;
  cin >> a >> b >> c;
  cout << fixed;
  // S
  cout << setprecision(9) << (double)a*b*sin(PI*(double)c/180)/2.0 << endl;
  // L
  cout << setprecision(9) << (sqrt(pow((double)a, 2.0)+pow((double)b, 2.0)-2.0*(double)a*(double)b*cos(PI*c/180)) + (double)a +(double) b) <<  endl;
  // h
  cout << setprecision(9) << b*sin(PI*c/180) << endl;
  return 0;
}
