#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
  int n;
  long sum;
  double ave, dis;
  while (1) {
    cin >> n;
    sum = 0;
    dis = 0;
    if(n == 0) break;
    vector<int> s(n);
    for(int i=0;i<n;i++){
      cin >> s.at(i);
      sum += s.at(i);
    }
    ave = (double)sum / n;
    for(int j=0;j<n;j++){
      dis += pow(((double)s.at(j)-ave), 2.0);
    }
    dis = sqrt(dis/n);
    cout << fixed << endl;
    cout << setprecision(9);
    cout << dis << endl;
  }

  return 0;
}
