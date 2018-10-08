//Deven Pace Assignment 12
//start
//determine variables and functions
//create menu for user to select one of the 5 options
//create random computer generated selection of the 5 options
//write the boolean to determine the determine winner
//write list of all available winning options
//write list of all available losing options
//display winner
//end

//******************************************************************************

#include <iostream>
#include <ctime>

using namespace std;

int getUserChoice();
int getComputerChoice();
bool determineWinner(int, int);
void displayChoice(int);
void showMenu();

const int ROCK = 1,
          PAPER = 2,
          SCISSORS = 3,
          LIZARD = 4,
          SPOCK = 5;

int main()
{
  int userGuess,
      computerGuess;

      userGuess = getUserChoice();
      computerGuess = getComputerChoice();
      displayChoice(computerGuess);
      determineWinner(userGuess, computerGuess);

      return 0;
}

//******************************************************************************

//Menu for user to choose

//******************************************************************************

void showMenu()
{
  cout << "Rock Paper Scissors Lizard Spock Showdown!\n\n\n" << endl;
  cout << "Select one of the following characters:" << endl;
  cout << "1: Rock" << endl;
  cout << "2: Paper" << endl;
  cout << "3: Scissors" << endl;
  cout << "4: Lizard" << endl;
  cout << "5: Spock" << endl;
}

//******************************************************************************

//Getting user choice and ensuring it is a valid option

//******************************************************************************

int getUserChoice()
{
  int choice;
  showMenu();
  cin >> choice;
  while ((choice < 1 ) || (choice > 5)) {
    cout << "Your choice must be 1 - 5!" << endl;
	cout << "What is your guess: ";
         cin >> choice;
  }
  return choice;
}

//******************************************************************************

//Getting computer choice

//******************************************************************************

int getComputerChoice() {
	unsigned seed = time(0);
	srand(seed);
	int choice = (rand() % (5)) + 1;
	return choice;
}

void displayChoice(int computerGuess) {
  cout << "Computer guess: " << computerGuess << endl << endl;
}

//******************************************************************************

//determining winner with boolean

//******************************************************************************

bool determineWinner(int user, int computer)
{
  bool winner;
  while (user == computer)
  {
    winner = false;
    user = getUserChoice();
    computer = getComputerChoice();
    displayChoice(computer);
  }

  if (user != computer) {
    winner = true;

//******************************************************************************

    // All possible winning scenarios

//******************************************************************************

    if ((user == SCISSORS) && (computer == PAPER)) {
      cout << "Scissors cut paper. You win!" << endl;
    }
    if ((user == PAPER) && (computer == ROCK)) {
      cout << "Paper covers rock. You win!" << endl;
    }
    if ((user == ROCK) && (computer == LIZARD)) {
      cout << "Rock crushes lizard. You win!" << endl;
    }
    if ((user == LIZARD) && (computer == SPOCK)) {
      cout << "Lizard poisons spock. You win!" << endl;
    }
    if ((user == SPOCK) && (computer == SCISSORS)) {
      cout << "Spock smashes scissors. You win!" << endl;
    }
    if ((user == SCISSORS) && (computer == LIZARD)) {
      cout << "Spock decapitates lizard. You win!" << endl;
    }
    if ((user == LIZARD) && (computer == PAPER)) {
      cout << "Lizard eats paper. You win!" << endl;
    }
    if ((user == PAPER) && (computer == SPOCK)) {
      cout << "Paper disproves Spock. You win!" << endl;
    }
    if ((user == SPOCK) && (computer == ROCK)) {
      cout << "Spock vaporizes rock. You win!" << endl;
    }
    if ((user == ROCK) && (computer == SCISSORS)) {
      cout << "Rock breaks scissors. You win!" << endl;
    }

//******************************************************************************

    // All possible losing situations

//******************************************************************************

    if ((computer == SCISSORS) && (user == PAPER)) {
			cout << "Scissors cut paper. You Lose!" << endl << endl;
		}
		if ((computer == PAPER) && (user == ROCK)) {
			cout << "Paper covers rock. You Lose!" << endl << endl;
		}
		if ((computer == ROCK) && (user == LIZARD)) {
			cout << "Rock crushes lizard. You Lose!" << endl << endl;
		}
		if ((computer == LIZARD) && (user == SPOCK)) {
			cout << "Lizard poisons Spock. You Lose!" << endl << endl;
		}
		if ((computer == SPOCK) && (user == SCISSORS)) {
			cout << "Spock smashes scissors. You Lose!" << endl << endl;
		}
		if ((computer == SCISSORS) && (user == LIZARD)) {
			cout << "Scissors decapitated lizard. You Lose!" << endl << endl;
		}
		if ((computer == LIZARD) && (user == PAPER)) {
			cout << "Lizard eats paper. You Lose!" << endl << endl;
		}
		if ((computer == PAPER) && (user == SPOCK)) {
			cout << "Paper disproves Spock. You Lose!" << endl << endl;
		}
		if ((computer == SPOCK) && (user == ROCK)) {
			cout << "Spock vaporizes rock. You Lose!" << endl << endl;
		}
		if ((computer == ROCK) && (user == SCISSORS)) {
			cout << "Rock breaks scissors. You Lose!" << endl << endl;
		}
  }
  return winner;
}
