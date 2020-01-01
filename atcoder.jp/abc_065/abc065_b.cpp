// abc065_b
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  int n,current,cnt=0;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;++i) {
    cin >> a.at(i);
  }
  current = 1;

  while(current != 2 && cnt < n) {
    current = a.at(current-1);
    cnt++;
  }

  if(cnt >= n) {
    cout << -1 << endl;
  } else {
    cout << cnt << endl;
  }
  return 0;
}
