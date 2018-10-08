//Project 10
//Deven Pace - Rigsby
//start
//declare variables
//open random.txt File
//if opened successfully, display successful note
//code while loop in if statement to declare high, low, and Average
//close file. if closed successfully, display successful note
//stop

#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main() {

// variables

  int readNumber,
      lowestNumber,
      highestNumber,
      count = 0,
      total = 0;

  double average;

// end variables

//open random.txt file
  ifstream randomNumberFile("C:\\Users\\deven\\Desktop\\Programming\\projects\\Random.txt");

//open success note
  if (randomNumberFile) {
    cout << "File has opened successfully." << endl;

    randomNumberFile >> readNumber;

//While loop begin

    while (randomNumberFile >> readNumber) {

      if (count == 0) {
        highestNumber = readNumber;
      }
      else if (readNumber > highestNumber) {
          highestNumber = readNumber;
      }
      total += readNumber;
      count++;
    }

// while loop ends

//average numbers

average = static_cast<double>(total) / count;

//close success note

  randomNumberFile.close();
    if (!randomNumberFile) {
      cout << "File has closed successfully." << endl << endl;
    }

// Output of numbers

cout << left << "Numbers read from file: " << right << count << endl;
cout << left << "Sum of all numbers: " << right << total << endl;
cout << left << "Average of all numbers: " << right << average << endl;
cout << left << "Lowest number: " << right << lowestNumber << endl;
cout << left << "Highest number: " << right << highestNumber << endl;
  }

//did not open success note

  else {
    cout << "File did not open successfully, exiting program." << endl;
    return 0;
  }
  return 0;
}
//end
