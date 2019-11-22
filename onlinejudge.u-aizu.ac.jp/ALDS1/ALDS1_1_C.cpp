#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
  if(n<2)return false;
  for (int i = 2; i*i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main(int argc, char *argv[])
{
  int n, in, count = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin>>in;
    if(prime(in))count++;
  }
  cout<<count<<endl;
  return 0;
}
