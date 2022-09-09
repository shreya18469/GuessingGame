#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  int input;
  int num;
  int tries = 0;
  srand(time(0));
  num = rand() % 100 +1;
  cout << "Guess a number 1-100";

  do {
    cin >> input;
    tries++;
    if (input > num)
      cout << "Too high ";
    else if (input < num)
      cout << "Too low ";
    else{
      cout << "Correct! You got it in " << tries << " guesses";
    }
  } while (input != num);

  

  return 0;

}
