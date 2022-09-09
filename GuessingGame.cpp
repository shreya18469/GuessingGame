/*
Shreya Suresh
9/9/22
Guessing Game- user guesses a number 1-100, program tells them if its too high, too low, or correct and displays how many guesses it took

C++ rules:
1. No global variables
2. No strings
3. Include <iostream>, not stdio
 */

#include <iostream>
using namespace std;

int main()
{
  int input;
  int num;
  int tries = 0;
  char stillPlaying;
  srand(time(0));
  num = rand() % 100 + 1;
  cout << "Guess a number 1-100";

  do {
    cin >> input;
    tries++;
    if (input > num)
      cout << "Too high ";
    else if (input < num)
      cout << "Too low ";
    else{
      cout << "Correct! You got it in " << tries << " guesses. ";
      cout << "Do you want to play again? Type y or n:  ";
      cin >> stillPlaying;
      if (stillPlaying == 'y')
	main();
      if (stillPlaying == 'n')
	cout << "Game Over.";
    }
  } while (input != num );
  

  return 0;

}
