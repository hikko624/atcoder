// abc124_a
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
  int a, b, ans;
  cin >> a >> b;
  if(a == b){
    cout << a+b << endl;
  } else {
    ans = max(a,b);
    ans += ans - 1;
    cout << ans << endl;
    return 0;
  }
}
