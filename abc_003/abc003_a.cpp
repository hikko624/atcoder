// abc003_a
#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;
typedef long long ll;
int main()
{
  int n;
  cin >> n;
  ll ans = 0;
  rep(i,n+1) {
    ans+=10000*i;
  }
  cout << ans/n << endl;
  return 0;
}
