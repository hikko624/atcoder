#include <iostream>
#include <vector>
using namespace std;
class Dice
{
private:
  vector<int> dice;
public:
  Dice(vector<int> num) {
    for (int i = 0; i < (int)num.size(); ++i) {
      dice.push_back(num.at(i));
    }
  }

  Dice roll(char c) {
    int tmp;
    if(c == 'S'){
      tmp = dice.at(0);
      dice.at(0) = dice.at(4);
      dice.at(4) = dice.at(5);
      dice.at(5) = dice.at(1);
      dice.at(1) = tmp;
    } else if (c == 'E') {
      tmp = dice.at(0);
      dice.at(0) = dice.at(3);
      dice.at(3) = dice.at(5);
      dice.at(5) = dice.at(2);
      dice.at(2) = tmp;
    } else if (c == 'N') {
      tmp = dice.at(0);
      dice.at(0) = dice.at(1);
      dice.at(1) = dice.at(5);
      dice.at(5) = dice.at(4);
      dice.at(4) = tmp;
    } else {
      tmp = dice.at(0);
      dice.at(0) = dice.at(2);
      dice.at(2) = dice.at(5);
      dice.at(5) = dice.at(3);
      dice.at(3) = tmp;
    }
    return dice;
  }
  int getDiceTopNum() { return dice.at(0); }
};


int main(int argc, char *argv[])
{
  vector<int> num(6);
  string s;
  for (int i = 0; i < 6; ++i) {
    cin >> num.at(i);
  }
  Dice dice(num);
  cin >> s;

  for (int j = 0; j < (int)s.length(); ++j) {
    dice = dice.roll(s[j]);
  }
  cout << dice.getDiceTopNum() << endl;

  return 0;
}
