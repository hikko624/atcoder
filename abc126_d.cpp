#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int n, m;
  cin >> n >> m;
  vector<int> x(m), y(m), z(m);
  for(int i = 0; i < m; ++i) {
    cin >> x.at(i) >> y.at(i) >> z.at(i);
  }

  return 0;
}
