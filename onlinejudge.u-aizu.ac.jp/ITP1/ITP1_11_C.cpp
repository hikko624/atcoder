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
};

int main(int argc, char *argv[])
{
  vector<int> num(6);
  for(int i = 0; i < 6; ++i){
    cin >> num.at(i);
  }
  Dice dice1(num);
  for(int i = 0; i < 6; ++i){
    cin >> num.at(i);
  }
  Dice dice2(num);
  bool isSameTop = false, isSameDice = true;
  for(int i = 0; i < num.size(); ++i) {
    if (dice1.at(0) == dice2.at(0)) {
      isSameTop = true;
      break;
    }
  }

  for(int i = 0;i<num.size()-1;++i){
    dice1.roll('N');
    if (dice1.at(0) == dice2.at(0)) {
      isSameTop = true;
      break;
    }
  }
  if (isSameTop == false) {
    for(int i = 0;i<num.size()-1;++i){
      dice1.roll('W');
      if(dice1.at(0) == dice2.at(0)) break;
    }
  }

  for(int i = 0;i<num.size()-1;++i){
    dice1.roll('p');
    if (dice1.at(1) == dice2.at(1)) {

      break;
    }

  }

  for (int i = 0; i < num.size(); ++i) {
    if (dice1.at(i) != dice2.at(i)) {
      isSameDice = false;
      break;
    }
  }

  cout << (isSameDice ? "Yes" : "No") << endl;

  return 0;
}
