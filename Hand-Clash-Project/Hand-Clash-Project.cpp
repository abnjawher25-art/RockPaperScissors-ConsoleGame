#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

// Define an enumeration for the available choices in the game
enum enValibleChoices { rock = 1, paper = 2, scissors = 3 };

// Function to generate a random number between 1 and 3
short randomNum()
{
	// Seed the random number generator with the current time
	srand(time(0));

	// Define the range for the random number generation
	const short from = 1;
	const short to = 3;

	// Generate a random number between from and to (inclusive)
	return rand() % (to - from + 1) + from;

}

// Function to read a number from the user with input validation
short readNumber(string declareMessage, string attniton)
{
	// Declare a variable to store the user's input
	short number = 0;

	do {

		// Prompt the user for input
		cout << declareMessage;
		cin >> number;

		// Check if the input is valid (between 1 and 3)
		if (number <= 0 || number > 3)
			cout << attniton;

		// Repeat the loop until a valid input is received
	} while (number <= 0 || number > 3);

	// Return the valid input
	return number;

}

// Function to check the user's choice based on the random number generated
enValibleChoices chekChoiceUser(short randomNumber)
{
	// Return the corresponding choice based on the random number
	if (randomNumber == 1)

		// Return rock if the random number is 1
		return enValibleChoices::rock;

	// Return paper if the random number is 2
	else if (randomNumber == 2)

		// Return paper if the random number is 2
		return enValibleChoices::paper;

	// Return scissors if the random number is 3
	else

		// Return scissors if the random number is 3
		return enValibleChoices::scissors;

}

// Function to check the computer's choice based on the random number generated
enValibleChoices chekChoicePC() {
	// Generate a random number for the computer's choice
	short randomNumberPC = randomNum();

	// Return the corresponding choice based on the random number
	if (randomNumberPC == 1)

		// Return rock if the random number is 1
		return enValibleChoices::rock;

	// Return paper if the random number is 2
	else if (randomNumberPC == 2)

		// Return paper if the random number is 2
		return enValibleChoices::paper;

	// Return scissors if the random number is 3
	else

		// Return scissors if the random number is 3
		return enValibleChoices::scissors;
}

// Function to run the game system
void GameSystem()
{
	// Declare a variable to store the user's choice
	short op = 0;

	// Run the game loop until the user chooses to exit
	do {

		// Prompt the user for their choice and validate the input
		enValibleChoices userChoice = chekChoiceUser(readNumber("\n[1]rock\t\t[2]paper\t[3]scissors: ", "\aNot avalible choise\n"));

		// Get the computer's choice
		enValibleChoices pcChoice = chekChoicePC();

		// Display the user's choice
		if (userChoice == pcChoice)
			// If the user's choice is the same as the computer's choice, it's a tie
			cout << "its a tie";

		// Check if the user wins based on the game rules
		else if ((userChoice == enValibleChoices::rock && pcChoice == enValibleChoices::scissors)
			|| (userChoice == enValibleChoices::paper && pcChoice == enValibleChoices::rock)
			|| (userChoice == enValibleChoices::scissors && pcChoice == enValibleChoices::paper)) {
			// If the user wins, display a message
			cout << "user winner";

		}// If the computer wins, display a message
		else {
			// If the computer wins, display a message
			cout << "PC winner";
		}

		// Prompt the user to continue or exit the game	
		cout << "\nperss any key to complete no [0]: ";
		// Read the user's input for continuing or exiting the game
		cin >> op;

		// Seed the random number generator with the current time for the next round
	} while (op != 0);

}

// Main function to start the program
int main()
{
	// Seed the random number generator with the current time
	srand(time(nullptr));

	// Call the GameSystem function to start the game
	GameSystem();

	// Pause the console before exiting
	system("pause");

	// Return 0 to indicate successful execution
	return 0;
}

