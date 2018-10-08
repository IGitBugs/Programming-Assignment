//Deven Pace Assignment 11
//start
//code functions: lowest, average, and scores
//ask user to input test scores
//ensure the test score is greater than 0 and lower than 100
//calculate the average of the 6 scores
//drop the lowest scores
//end



#include <iostream>
using namespace std;

// Function Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int, int);
int findLowest(int, int, int, int, int, int);

int main()
{
	int Score1, Score2, Score3, Score4, Score5, Score6;

	// change this
	cout << "\n\nSuper Teacher Grader Calculator\n\n";


	getScore(Score1);
	getScore(Score2);
	getScore(Score3);
	getScore(Score4);
	getScore(Score5);
	getScore(Score6);

	// Call calcAverage and pass the five scores
	calcAverage(Score1, Score2, Score3, Score4, Score5, Score6);

	return 0;
}
//******************************************************************************


//ask user for test scores, store it, validate

//******************************************************************************

void getScore (int &Score)
{
  do {
    cout << "Enter a test score: ";
    cin >> Score;

    if (Score < 0 || Score > 100)
    {
      cout << "Invalid test score.\n"
           << "Score must be greater or equal to 0 or lower or equal to 100.\n";
    }

  } while (Score < 0 || Score > 100);
}

//******************************************************************************

//finding the average of 6 test scores

//******************************************************************************

void calcAverage(int Score1, int Score2, int Score3, int Score4, int Score5, int Score6)
{

  //lowest test score and average test score variables
  int Lowest;
  double Avg;

  //call function
  Lowest = findLowest(Score1, Score2, Score3, Score4, Score5, Score6);

  //calculate the Average
  if (Lowest == Score1)
    Avg = (Score2 + Score3 + Score4 + Score5 + Score6)/5;
  else if (Lowest == Score2)
    Avg = (Score1 + Score3 + Score4 + Score5 + Score6)/5;
  else if (Lowest == Score3)
    Avg = (Score1 + Score2 + Score4 + Score5 + Score6)/5;
  else if (Lowest == Score4)
    Avg = (Score1 + Score2 + Score3 + Score5 + Score6)/5;
  else if (Lowest == Score5)
    Avg = (Score1 + Score2 + Score3 + Score4 + Score6)/5;
  else if (Lowest == Score6)
  	Avg = (Score1 + Score2 + Score3 + Score4 + Score5)/5;


    //Display of the Average
    cout << "The average of the 5 best test scores are: " << Avg << ". ";
}

//******************************************************************************

// Finding the lowest score to delete from average

//******************************************************************************
int findLowest(int Score1, int Score2, int Score3, int Score4, int Score5, int Score6)
{
  //find and return lowest test score
  if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 && Score1 < Score5 && Score1 < Score6)
    return Score1;
  else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 && Score2 < Score5 && Score2 < Score6)
    return Score2;
  else if (Score3 < Score1 && Score3 < Score2 && Score2 < Score4 && Score3 < Score5 && Score3 < Score6)
    return Score3;
  else if (Score4 < Score1 && Score4 < Score2 && Score4 < Score3 && Score4 < Score5 && Score4 < Score6)
    return Score4;
  else if (Score5 < Score1 && Score5 < Score2 && Score5 < Score3 && Score5 < Score4 && Score5 < Score6)
    return Score5;
  else if (Score6 < Score1 && Score6 < Score2 && Score6 < Score3 && Score6 < Score4 && Score6 < Score5)
    return Score6;
}
