#include <iostream>

using namespace std;

//this program creates a number between 1 and 100 and has the user try to guess it using the console. It will say if you are to high or low
//by ryan veith
//9/15/2022

/*3 rules of C++ class
1. No global variables. (Global constants are all right.)
2. No strings. Not ever. (You can use cstrings/character arrays, and the cstring and cctype libraries are okay. In fact, I recommend using strcmp and strlen in your projects.)
3. You should include <iostream>, not stdio. (This applies more to C programmers.)
*/

int main()
{
  //setup game 1
  int gameDone = 0;
  srand(time(NULL));
  int number = (rand() % 100) + 1;
  cout << "pick a number between 1 and 100" << endl;
  int input = 0;
  int guessCount = 0;
  //playing the game
  while (gameDone != 1)
    {
      cin >> input;
      guessCount++;
      //check guess and give to high/low message
      if (input == number)
	{
	  cout << input << " is the correct number congradulations!" << endl;
	  cout << "it took you " << guessCount << " guesses " << endl;
	  cout << "want to play agian? (y/n)" << endl;
	  char keepPlaying = 'n';
	  cin >> keepPlaying;
	  if (keepPlaying == 'y' || keepPlaying == 'Y')
	    {
	      //start a new game
	      cout << "pick a number between 1 and 100" << endl;
	      guessCount = 0;
	      number = (rand() % 100) + 1;
	    }
	  else
	    {
	      gameDone = 1;
	    } 
	}
      else if (input < number)
 	{
	  cout << "your number is too low" << endl;
	}
      else if (input > number)
	{
	  cout << "your number is too high" << endl;
	}
      else
	{
	  cout << "that was not a number" << endl;
	}
    }
  cout << "game over" << endl;
  return 0;
}
