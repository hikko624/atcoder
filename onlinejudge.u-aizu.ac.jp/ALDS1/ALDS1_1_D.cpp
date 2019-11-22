#include <iostream>
#include <cmath>
#define INF 1000000000
using namespace std;

int main(int argc, char *argv[])
{
  int n, maxv=-INF,minv,r;
  cin>>n;
  cin>>minv;

  for(int i=1;i<n;++i){
    cin>>r;
    maxv=max(maxv,r-minv);
    minv=min(minv,r);
  }
  cout<<maxv<<endl;
  return 0;
}
