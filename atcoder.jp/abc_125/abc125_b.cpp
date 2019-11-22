#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x = 0, y = 0;
  cin >> n;
  vector<int> v(n), c(n);
  for (int i = 0; i < n; i++) {
    cin >> v.at(i);
  }
  for (int i = 0; i < n; i++) {
    cin >> c.at(i);
  }

  for (int i = 0; i < n; i++) {
    if (v.at(i) > c.at(i)) {
      x += v.at(i);
      y += c.at(i);
    }
  }
  if(x-y<0) cout << "0" << endl;
  else cout << x-y << endl;
}
