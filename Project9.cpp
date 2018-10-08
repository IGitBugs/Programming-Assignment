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

int main() {
	int userGuess,
		compGuess;

	userGuess = getUserChoice();
	compGuess = getComputerChoice();
	displayChoice(compGuess);
	determineWinner(userGuess, compGuess);

	system("pause");
	return 0;
}

int getUserChoice() {
	int choice;
	showMenu();
	cin >> choice;
	while ((choice < 1) || (choice > 5)) {
		cout << "Must choose 1-5!" << endl << endl
			<< "Your guess: ";
		cin >> choice;
	}
	return choice;
}

int getComputerChoice() {
	unsigned seed = time(0);
	srand(seed);
	int choice = (rand() % (5)) + 1;
	return choice;
}

bool determineWinner(int user, int comp) {
	bool winner;
	while (user == comp) {
		winner = false;
		user = getUserChoice();
		comp = getComputerChoice();
		displayChoice(comp);
	}
	if (user != comp) {
		winner = true;
		// winning scenarios
		if ((user == SCISSORS) && (comp == PAPER)) {
			cout << "Scissors cut paper. You Win!" << endl << endl;
		}
		if ((user == PAPER) && (comp == ROCK)) {
			cout << "Paper covers rock. You Win!" << endl << endl;
		}
		if ((user == ROCK) && (comp == LIZARD)) {
			cout << "Rock crushes lizard. You Win!" << endl << endl;
		}
		if ((user == LIZARD) && (comp == SPOCK)) {
			cout << "Lizard poisons Spock. You Win!" << endl << endl;
		}
		if ((user == SPOCK) && (comp == SCISSORS)) {
			cout << "Spock smashes scissors. You Win!" << endl << endl;
		}
		if ((user == SCISSORS) && (comp == LIZARD)) {
			cout << "Scissors decapitated lizard. You Win!" << endl << endl;
		}
		if ((user == LIZARD) && (comp == PAPER)) {
			cout << "Lizard eats paper. You Win!" << endl << endl;
		}
		if ((user == PAPER) && (comp == SPOCK)) {
			cout << "Paper disproves Spock. You Win!" << endl << endl;
		}
		if ((user == SPOCK) && (comp == ROCK)) {
			cout << "Spock vaporizes rock. You Win!" << endl << endl;
		}
		if ((user == ROCK) && (comp == SCISSORS)) {
			cout << "Rock breaks scissors. You Win!" << endl << endl;
		}

		// losing senarios
		if ((comp == SCISSORS) && (user == PAPER)) {
			cout << "Scissors cut paper. You Lose!" << endl << endl;
		}
		if ((comp == PAPER) && (user == ROCK)) {
			cout << "Paper covers rock. You Lose!" << endl << endl;
		}
		if ((comp == ROCK) && (user == LIZARD)) {
			cout << "Rock crushes lizard. You Lose!" << endl << endl;
		}
		if ((comp == LIZARD) && (user == SPOCK)) {
			cout << "Lizard poisons Spock. You Lose!" << endl << endl;
		}
		if ((comp == SPOCK) && (user == SCISSORS)) {
			cout << "Spock smashes scissors. You Lose!" << endl << endl;
		}
		if ((comp == SCISSORS) && (user == LIZARD)) {

			cout << "Scissors decapitated lizard. You Lose!" << endl << endl;
		}
		if ((comp == LIZARD) && (user == PAPER)) {
			cout << "Lizard eats paper. You Lose!" << endl << endl;
		}
		if ((comp == PAPER) && (user == SPOCK)) {
			cout << "Paper disproves Spock. You Lose!" << endl << endl;
		}
		if ((comp == SPOCK) && (user == ROCK)) {
			cout << "Spock vaporizes rock. You Lose!" << endl << endl;
		}
		if ((comp == ROCK) && (user == SCISSORS)) {
			cout << "Rock breaks scissors. You Lose!" << endl << endl;
		}
	}

	return winner;
}

void displayChoice(int compChoice) {

	cout << "Computer guess: " << compChoice << endl << endl;

}

void showMenu() {
	cout << "1 - Rock" << endl
		<< "2 - Paper" << endl
		<< "3 - Scissors" << endl
		<< "4 - Lizard" << endl
		<< "5 - Spock" << endl << endl
		<< "Your guess: ";
}
