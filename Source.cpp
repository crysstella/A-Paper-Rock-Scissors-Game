#include <iostream>
#include <string>
using namespace std;
bool announce(char player1, char player2);
int main()
{
	/*Write a program that scores a paper - rock - scissors game.
	Two players each enter P(for paper), R(for rock), or S(for scissors).
	The program than announces who won and why, based on the following criteria :
	“Paper covers rock”
		“Rock smashes scissors” 
		“Scissors cut paper”
		If both players select the same value, tell them that nobody wins.
		Be sure to allow both uppercase and lowercase entries from the users.
*/
	cout << "Paper covers rock" << endl;
	cout << "Rock smashes scissors" << endl;
	cout << "Scissors cut paper" << endl;
	cout << "Two players each enter P(for paper), R(for rock), or S(for scissors).\n\n";

	char player1 = 'a', player2 = 'a';
	string choice = "yes";
	while (choice == "yes")
	{
		cout << "Player 1 enter your choice: ";
		cin >> player1;
		cout << "Player 2 enter your choice: ";
		cin >> player2;

		if (announce(player1, player2) == true)
		{
			cout << "\nPlayer 1 is a winner! Player 2 losed!";
		}
		else
		{
			cout << "\nPlayer 2 is a winner! Player 1 losed!\n";
		}

		cout << " \nDo you want to play again (yes or no) ";
		cin >> choice;

	}
	return 0;
}

bool announce(char player1, char player2)
{
	bool result = false;
	switch (player1)
	{
		//Rock
	case 'R':
	case 'r':
		if (player2 == 'S' || player2 == 's') 		//Scissors
		{
			result = true;
			break;
		}
		//else if (player2 == 'P' || 'p')		//Paper
		//{
		//	result = false;
		//}

	//	//Paper
	case 'P':
	case 'p':
		if (player2 == 'R' || player2 == 'r')			//Rock
		{
			result = true;
			break;
		}
	//	//else if (player2 == 'S' || 's')		//Scissors
	//	//{
	//	//	result = false;
	//	//}

	//	//Scissors
		case 'S':
		case 's':
		if (player2 == 'P' || player2 == 'p')			//Paper
		{
			result = true;
			break;
		}
	//	//else if (player2 == 'R' || 'r')		//Rock
	//	//{
	//	//	result = false;
	//	//}
	//	//break;
	default:
		if (player2 == 'P' || player2 == 'p')			//Paper
		{
			result = true;
			break;
		}
		//else if (player2 == 'R' || 'r')		//Rock
		//{
		//	result = false;
		//}
	}
	return result;
}
