#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
/*
Write a number-guessing game in which the computer selects a random
number in the range of 0 to 100, and users get a maximum of 20 attempts to guess it. At
the end of each game, users should be told whether they won or lost and then be asked
whether they want to play again. When the user quits, the program should output the
total number of wins and losses. To make the game more interesting, the program
should vary the wording of the messages that it outputs for winning, for losing, and for
asking for another game. Create 10 different messages for each of these cases and use
random numbers to choose among them. This application should use at least one Do-
While loop and at least one Switch statement. Write your C++ code using good style and
document comments. Only code that has been discussed in class is allowed for use.
Code that is used that has not been discussed in class will result in significant point loss
*/

using namespace std;

//function prototypes
void playGame(int& wins, int& losses);
void WinMessage();
void loseMessage();
void playAgainMessage();
void askPlayAgain(char& choice);


int main()
{

	int wins = 0;
	int losses = 0;
	char choice;

	for (int i = 0; i < count; i++)
	{
		srand(time(NULL));
		do
		{
			playGame(wins, losses);
			askPlayAgain(choice);
		} while (choice == 'Y' || choice == 'y');

		cout << "\nThanks for Playing!" << endl;
		cout << "Total wins: " << wins << endl;
		cout << "Total losses: " << losses << endl;

		return 0;
	}

	// Number guessing game
	void playGame(int& wins, int& losses);
	{
		int Num1;
		int Guess;
		int attempts = 0;

		Num1 = rand() % 101;

		cout << "\nGuess the number between 0 and 100!" << endl;
		cout << "yout have 20 attempts." << endl;

		do
		{
			cout << "\nEnter your Guess" << endl;
			cin >> Guess;

			attempts++;

			if (Guess == Num1)
			{
				WinMessage();
				wins++;
			}
			else if (Guess > Num1)
			{
				cout << "Too high! Try again." << endl;
			}
			else
			{
				cout << "Too low! Try again." endl;
			}
			if (attempts == 20 && Guess != Num1)
			{
				loseMessage();
				cout << "The number was: " << Num1 << endl;
				losses++;
			} while (Guess != Num1 && attempts < 20);
		}

		//10 different winning messages
		void winMessage()
		{
			switch (rand() % 10)
			{
			case 0: cout << "You win! Great Job" << endl; break;
			case 1: cout << "Winner winner, Chicken Dinner!" << endl; break;
			case 2: cout << "Thats right! You're on fire!" << endl; break;
			case 3: cout << "Thats Correct! I guess anyone can get lucky" << endl; break;
			case 4: cout << "BOOM! Nailed it!" << endl; break;
			case 5: cout << "Right on the money!!" << endl; break;
			case 6: cout << "Jackpot!!!!" << endl; break;
			case 7: cout << "Bout time you got it right lil bro" << endl; break; nbmvjhgftyur5674dec3vxswrcdexs bnm
			case 8: cout << "does a bear shit in the woods?" << endl; break;
			case 9: cout << "You got it CHAMP!!" << endl; break;
			}
		}

		// 10 replay messages
		void loseMessage()
		{
			switch (rand() % 10)
			{
			case 0: cout << "Are you even trying?" << endl; break;
			case 1: cout << "Im not mad, just disapointed" << endl; break;
			case 2: cout << "you sorry lil boi" << endl; break;
			case 3: cout << "I didn't give you 20 guesses to waste them all." << endl; break;
			case 4: cout << "Don't give up!" << endl; break;
			case 5: cout << "You almost had it!" << endl; break;
			case 6: cout << "The computer wins this round!!" << endl; break;
			case 7: cout << "Don't give up!" << endl; break;
			case 8: cout << "That was a tough one!" << endl; break;
			case 9: cout << "You almost had it!!" << endl; break;
			}

			//10 different replay messages
			void playAgainMessage()
			{
			case 0: cout << "Ready for another round?" << endl; break;
			case 1: cout << "Want to play again?" << endl; break;
			case 2: cout << "Done with the warm up, should we play for real this time?" << endl; break;
			case 3: cout << "Should we play again?" << endl; break;
			case 4: cout << "Perhaps another game?" << endl; break;
			case 5: cout << "Want another chance?" << endl; break;
			case 6: cout << "Lets play another!!" << endl; break;
			case 7: cout << "Want to Guess more?" << endl; break;
			case 8: cout << "Want to play again or are you scared!" << endl; break;
			case 9: cout << "Do you want to keep playing?" << endl; break;
			}
			// ask user to play again
			void askPlayAgain(char& choice)
			{
				playAgainMessage();
				cout << "Enter Y for yes or N for no: ";
				cin >> choice;
			}

		}
	}
	
}
	