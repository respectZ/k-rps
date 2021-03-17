#include <iostream>
#include <time.h>

using namespace std;

char options[3][8] = {"Rock", "Paper", "Scissor"};

void loopMain() {
  int inp = 0;
  while(true) {
    int pos = 1;
    for(auto& x : options) {
      cout << pos << ". " << x << endl;
      pos++;
    }
    
    cout << "Pick your action : ";
    cin >> inp;
    inp--;
    int _computer = rand() % 3;
    cout << options[inp] << " vs " << options[_computer] << endl;
    if(inp == _computer) {
      cout << "Draw !!" << endl;
    }
    else if(((inp == 0) && (_computer == 1)) || ((inp == 1) && (_computer == 2)) || ((inp == 2) && (_computer == 0))) {
      cout << "Lose !!" << endl;
    }
    else {
      cout << "Win !! " << endl;
    }
    cout << endl;
    pos = 1;
  }
}

int main() {
    cout << "Simple Rock Paper Scissor Game" << endl;
  srand(time(NULL));
  loopMain();
    return 0;
}
