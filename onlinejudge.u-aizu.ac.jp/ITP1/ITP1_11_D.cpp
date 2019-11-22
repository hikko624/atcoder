#include <iostream>
#include <vector>
#include <algorithm>
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
  int at(int i) {
    return dice.at(i);
  }

  void roll(char c) {
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
    } else if (c == 'W'){
      tmp = dice.at(0);
      dice.at(0) = dice.at(2);
      dice.at(2) = dice.at(5);
      dice.at(5) = dice.at(3);
      dice.at(3) = tmp;
      // 回転p
    } else  {
      tmp = dice.at(1);
      dice.at(1) = dice.at(3);
      dice.at(3) = dice.at(4);
      dice.at(4) = dice.at(2);
      dice.at(2) = tmp;
    }
  }

  bool isSame(Dice inDice) {
    bool isSameTop = false, areSameDice = true;
    for(int i = 0; i < dice.size(); ++i) {
      if (dice.at(0) == inDice.at(0)) {
        isSameTop = true;
        break;
      }
    }

    for(int i = 0;i<dice.size()-1;++i){
      inDice.roll('N');
      if (dice.at(0) == inDice.at(0)) {
        isSameTop = true;
        break;
      }
    }
    if (isSameTop == false) {
      for(int i = 0;i<dice.size()-1;++i){
        inDice.roll('W');
        if(dice.at(0) == inDice.at(0)) break;
      }
    }

    for(int i = 0;i<dice.size()-1;++i){
      inDice.roll('p');
      if (dice.at(1) == inDice.at(1)) {
        break;
      }

    }

    for (int i = 0; i < dice.size(); ++i) {
      if (dice.at(i) != inDice.at(i)) {
        areSameDice = false;
        break;
      }
    }
    return areSameDice;
  }
};

int main(int argc, char *argv[])
{
  int n;
  cin >> n;
  vector<int> num(6);
  for(int i = 0; i < 6; ++i){
    cin >> num.at(i);
  }
  Dice firstDice(num);
  for(int i=1;i<n;++i){
    for(int i = 0; i < 6; ++i){
      cin >> num.at(i);
    }
    Dice otherDice(num);
    if (firstDice.isSame(otherDice)) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
