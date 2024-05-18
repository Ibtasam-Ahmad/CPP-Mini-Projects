#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function Prototypes
void ShowMainMenu();
void ShowPlayingMods();
void ShowHistory();
void ShowDificulty();
void Start1PlayerGame(int);
void Start2PlayerGame();
void DisplayBoard(char[][3]);
bool checkSpace(char);
int checkWinner(char[][3]);
void TakeInput(int, int &, int &);
void ShowResult(int);
void SaveResult();
void InputValidationInRange(int &, int, int);
void EasyGame();
void MediumGame();
bool CheckWiningMove(char[][3]);
bool CheckDefensiveMove(char[][3]);
void RandomMove(char[][3]);
//void HardGame();

//Global Variables
string Player1Name,
Player2Name,
WinnerName,
Level,
Date;

int main()
{

	int MainMenuChoice = 0,
		PlayingModeChoice = 0,
		DificultyChoice = 0;



	do
	{
		ShowMainMenu();
		cin >> MainMenuChoice;
		InputValidationInRange(MainMenuChoice, 1, 3);

		switch (MainMenuChoice)
		{
		case 1:

			do
			{
				ShowPlayingMods();
				cin >> PlayingModeChoice;
				InputValidationInRange(PlayingModeChoice, 1, 3);

				switch (PlayingModeChoice)
				{
				case 1:
					ShowDificulty();
					cin >> DificultyChoice;
					InputValidationInRange(DificultyChoice, 1, 4);
					if (DificultyChoice != 4)
					{
						Start1PlayerGame(DificultyChoice);
						
					}
					break;
				case 2:
					Start2PlayerGame();
					break;
				case 3:
					DificultyChoice = 0;
					break;
				}
			} while (DificultyChoice == 4);

			break;

		case 2:
			ShowHistory();
			continue;
		case 3:
			exit(0);
		}

	} while (MainMenuChoice != 3);
	system("pause");
}
//****************************************
//	DEFINATION OF FUNCTION ShowGameMenu **
//	This function displays Main Menu.   ** 
//****************************************
void ShowMainMenu()
{
	system("cls");
	cout << "\t\tTIC TAC TOE\n";
	cout << "\tMain Menu\n";
	cout << "1.Play\n"
		<< "2.Game Results\n"
		<< "3.Quit\n";
	cout << "Enter your Choice : ";

}
//**************************************************
//	DEFINATION OF FUNCTION ShowPlayingMods        **
//	This function displays a menu of different    **
//	game mods.                                    **
//**************************************************
void ShowPlayingMods()
{

	system("cls");
	cout << "\t\tTIC TAC TOE\n";
	cout << "Choose game mod.\n";
	cout << "1. 1 Player (Play with Computer)\n"
		<< "2. 2 Player (Play with another palyer)\n"
		<< "3. Go Back\n";
	cout << "Enter your Choice : ";


}
//*******************************************
//	DEFINATION OF FUNCTION ShowHistory     **
//	This function reads Game records from  **
//	a file and display them.               **
//*******************************************
void ShowHistory()
{
	string ReadLine;
	ifstream fin;
	fin.open("GameRecords.txt");
	while (getline(fin, ReadLine))
	{
		cout << ReadLine << endl;
	}
	fin.close();
	cout << "Press [ENTER] to go back to Main Menu......";
	cin.ignore();
	cin.get();
}
//*********************************************
//	DEFINATION OF FUNCTION ShowDificulty     **
//	This function shows a menu for           **
//	different dificulty levels in the game.  **
//*********************************************
void ShowDificulty()
{
	system("cls");
	cout << "\t\tTIC TAC TOE\n";
	cout << "Choose game dificulty.\n";
	cout << "1.Easy\n"
		<< "2.Medium\n"
		<< "3.Hard\n"
		<< "4.Go Back\n";
	cout << "Enter your choice : \n";
}

//***************************************************
//	DEFINATION OF FUNCTION Start1PlayerGame        **
//	This function starts a 1 Player Game           **
//	in which the user can play against computer    ** 
//	with different dificulty levels.               **
//***************************************************
void Start1PlayerGame(int Dificulty)
{
	cin.ignore();
	cout << "Enter your name : ";
	getline(cin, Player1Name);
	Player2Name = "Computer";
	cout << "Enter date as DD-Month-YYYY : ";
	getline(cin, Date);

	switch (Dificulty)
	{
	case 1:
		Level = "Easy";
		EasyGame();
		break;
	case 2:
		Level = "Medium";
		MediumGame();
		break;
	case 3:
		Level = "Hard";
		//HardGame();
		break;

	}
}
//*************************************************
//	DEFINTION OF FUNCTION Start2PlayerGame       **
//	This function starts a 2 player game         **
//	in which user can play with another player.  **
//*************************************************
void Start2PlayerGame()
{
	char Gameboard[3][3] = { {'*','*','*'},
							 {'*','*','*'},
							 {'*','*','*'} };
	int row, col;
	int winner = 0;
	int Turns = 0;

	cin.ignore();
	cout << "Enter Player 1 name(First & Last) : ";
	getline(cin, Player1Name);
	cout << "Enter Player 2 name(First & Last) : ";
	getline(cin, Player2Name);
	cout << "Enter date as DD-Month-YYYY : ";
	getline(cin, Date);
	Level = "None";

	do
	{
		system("cls");
		DisplayBoard(Gameboard);

		TakeInput(1, row, col);
		while (!(checkSpace(Gameboard[row][col])))
		{
			cout << "The place you chose is already filled.\n"
				<< "Choose again.\n";
			TakeInput(1, row, col);
		}
		Gameboard[row][col] = 'X';
		system("cls");
		DisplayBoard(Gameboard);
		Turns++;
		winner = checkWinner(Gameboard);

		if (Turns < 9 && winner == 0)
		{
			TakeInput(2, row, col);
			while (!(checkSpace(Gameboard[row][col])))
			{
				cout << "The place you chose is already filled.\n"
					<< "Choose again.\n";
				TakeInput(2, row, col);
			}
			Gameboard[row][col] = 'O';
			winner = checkWinner(Gameboard);
			Turns++;
		}

	} while (Turns < 9 && winner == 0);
	if (winner == 2)
	{
		system("cls");
		DisplayBoard(Gameboard);
	}


	ShowResult(winner);
	cout << "Press [ENTER] to continue........\n";
	cin.ignore();
	cin.get();
	SaveResult();
}
//*********************************************************
//	DEFFINATION OF FUNCTION DisplayBoard                 **
//	This function displays the current board condition.  **
//*********************************************************
void DisplayBoard(char Board[][3])
{
	cout << "\tTIC TAC TOE\n";
	cout << "\t  0 1 2" << endl;

	for (int row = 0; row < 3; row++)
	{
		cout << "\t" << row << " ";
		for (int col = 0; col < 3; col++)
		{
			cout << Board[row][col] << " ";
		}
		cout << endl;
	}

}
//****************************************
//	DEFINATION OF FUNCTION checkSpace   **
//	This function checks if the chosen  **
//	position is available or not.       **
//****************************************
bool checkSpace(char Chosen)
{
	if (Chosen == '*')
		return true;
	else
		return false;

}
//*************************************************
//	DEFINATION OF FUNCTION checkWinner           **
//	This function checks if there is a winner.   **
//*************************************************
int checkWinner(char Board[][3])
{
	int winner;
	if ((Board[0][0] == 'X' && Board[0][1] == 'X' && Board[0][2] == 'X') ||
		(Board[1][0] == 'X' && Board[1][1] == 'X' && Board[1][2] == 'X') ||
		(Board[2][0] == 'X' && Board[2][1] == 'X' && Board[2][2] == 'X') ||
		(Board[0][0] == 'X' && Board[1][0] == 'X' && Board[2][0] == 'X') ||
		(Board[0][1] == 'X' && Board[1][1] == 'X' && Board[2][1] == 'X') ||
		(Board[0][2] == 'X' && Board[1][2] == 'X' && Board[2][2] == 'X') ||
		(Board[0][0] == 'X' && Board[1][1] == 'X' && Board[2][2] == 'X') ||
		(Board[0][2] == 'X' && Board[1][1] == 'X' && Board[2][0] == 'X'))
		winner = 1;
	else if ((Board[0][0] == 'O' && Board[0][1] == 'O' && Board[0][2] == 'O') ||
		(Board[1][0] == 'O' && Board[1][1] == 'O' && Board[1][2] == 'O') ||
		(Board[2][0] == 'O' && Board[2][1] == 'O' && Board[2][2] == 'O') ||
		(Board[0][0] == 'O' && Board[1][0] == 'O' && Board[2][0] == 'O') ||
		(Board[0][1] == 'O' && Board[1][1] == 'O' && Board[2][1] == 'O') ||
		(Board[0][2] == 'O' && Board[1][2] == 'O' && Board[2][2] == 'O') ||
		(Board[0][0] == 'O' && Board[1][1] == 'O' && Board[2][2] == 'O') ||
		(Board[0][2] == 'O' && Board[1][1] == 'O' && Board[2][0] == 'O'))
		winner = 2;
	else
		winner = 0;
	return winner;
}

//*****************************************************
//	DEFINATION OF FUNCTION TakeInput                 **
//	This function asks the player where to put mark. **
//*****************************************************
void TakeInput(int Player, int &row, int &col)
{
	cout << "Player " << Player << " :\n";
	cout << "Enter Row : ";
	cin >> row;
	InputValidationInRange(row, 0, 2);
	cout << "Enter Column : ";
	cin >> col;
	InputValidationInRange(col, 0, 2);
}
//**************************************************************
//	DEFINATION OF FUNCTION ShowResult                         **
//	This function shows winner or tie if there is no winner.  **
//**************************************************************
void ShowResult(int winner)
{
	if (winner == 1)
		WinnerName = Player1Name;
	else if (winner == 2)
		WinnerName = Player2Name;
	else
		WinnerName = "None";

	if (winner == 1 || winner == 2)
		cout << WinnerName << " won the game.\n";
	else
		cout << "That's a tie.\n";
}
//***********************************************************
//	DEFINATION OF FUNCTION SaveResult                      **
//	This function saves the result of the game in a file.  **
//***********************************************************
void SaveResult()
{
	vector<string>(temp_storage);
	ifstream fin;
	ofstream fout;
	string ReadLine;
	fin.open("GameRecords.txt");
	while (getline(fin, ReadLine))
	{
		temp_storage.push_back(ReadLine);
	}
	fin.close();

	fout.open("GameRecords.txt");
	for (auto val : temp_storage)
	{
		fout << val << endl;
	}

	fout << "Player 1 : " << Player1Name << endl
		<< "Oponent  : " << Player2Name << endl
		<< "Winner   : " << WinnerName << endl
		<< "Level    : " << Level << endl
		<< "Date     : " << Date << endl
		<< "=============================================================================\n";
	fout.close();
}
//********************************************
//	DEFINATION OF FUNCTION EasyGame         **
//	This function runs 1 Player game        **
//	with Easy level of dificulty in which   **
//	it is very easy to beat computer.       **  
//********************************************
void EasyGame()
{
	char Gameboard[3][3] = { {'*','*','*'},
							 {'*','*','*'},
							 {'*','*','*'} };
	int row, col;
	int winner = 0;
	int Turns = 0;

	srand(time(0));

	do
	{
		system("cls");
		DisplayBoard(Gameboard);

		TakeInput(1, row, col);
		while (!(checkSpace(Gameboard[row][col])))
		{
			cout << "The place you chose is already filled.\n"
				<< "Choose again.\n";
			TakeInput(1, row, col);
		}
		Gameboard[row][col] = 'X';
		system("cls");
		DisplayBoard(Gameboard);
		Turns++;
		winner = checkWinner(Gameboard);

		if (Turns < 9 && winner == 0)
		{
			RandomMove(Gameboard);
			winner = checkWinner(Gameboard);
			Turns++;
		}

	} while (Turns < 9 && winner == 0);
	if (winner == 2)
	{
		system("cls");
		DisplayBoard(Gameboard);
	}


	ShowResult(winner);
	cout << "Press [ENTER] to continue........\n";
	cin.ignore();
	cin.get();
	SaveResult();

}
//**************************************************
//	DEFINATION OF FUNCTION MediumGame             **
//	This function runs a game with Medium         **
//	dificulty level in which the computer tries   **
//	to block any possible win by user.            **
//	Hence, it is not that easy to win the game.   **
//**************************************************
void MediumGame()
{
	char Gameboard[3][3] = { {'*','*','*'},
						 {'*','*','*'},
						 {'*','*','*'} };
	int row, col;
	int winner = 0;
	int Turns = 0;
	bool WiningMove = false,
		 DefensiveMove = true;
	srand(time(0));

	do
	{
		system("cls");
		DisplayBoard(Gameboard);

		TakeInput(1, row, col);
		while (!(checkSpace(Gameboard[row][col])))
		{
			cout << "The place you chose is already filled.\n"
				<< "Choose again.\n";
			TakeInput(1, row, col);
		}
		Gameboard[row][col] = 'X';
		system("cls");
		DisplayBoard(Gameboard);
		Turns++;
		winner = checkWinner(Gameboard);

		if (Turns < 9 && winner == 0)
		{
			WiningMove = CheckWiningMove(Gameboard);
			if (!WiningMove)
				DefensiveMove = CheckDefensiveMove(Gameboard);
			if (!DefensiveMove)
				RandomMove(Gameboard);
				

			winner = checkWinner(Gameboard);
			Turns++;
		}

	} while (Turns < 9 && winner == 0);
	if (winner == 2)
	{
		system("cls");
		DisplayBoard(Gameboard);
	}


	ShowResult(winner);
	cout << "Press [ENTER] to continue........\n";
	cin.ignore();
	cin.get();
	SaveResult();


}
//*********************************************************
//	DEFINATION OF FUNCTION CheckWiningMove               **
//	This function checks if there is a                   **
//	wining move and if there is one, it takes the move.  **
//*********************************************************
bool CheckWiningMove(char Gameboard[][3])
{
	bool MovePresent = false;
	//Checking Row wise
	for (int i = 0; i < 3; i++)
	{
		if (Gameboard[i][0] == 'O' && Gameboard[i][1] == 'O' && Gameboard[i][2] == '*')
		{
			MovePresent = true;
			Gameboard[i][2] = 'O';
			break;
		}
		else if (Gameboard[i][0] == 'O' && Gameboard[i][2] == 'O' && Gameboard[i][1] == '*')
		{
			MovePresent = true;
			Gameboard[i][1] = 'O';
			break;
		}
		else if (Gameboard[i][1] == 'O' && Gameboard[i][2] == 'O' && Gameboard[i][0] == '*')
		{
			MovePresent = true;
			Gameboard[i][0] = 'O';
			break;
		}
	}
	//Checking column wise
	if (!MovePresent)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Gameboard[0][j] == '0' && Gameboard[1][j] == '0' && Gameboard[2][j] == '*')
			{
				MovePresent = true;
				Gameboard[2][j] = 'O';
				break;
			}
			else if (Gameboard[0][j] == 'O' && Gameboard[2][j] == 'O' && Gameboard[1][j] == '*')
			{
				MovePresent = true;
				Gameboard[1][j] = 'O';
				break;
			}
			else if (Gameboard[1][j] == 'O' && Gameboard[2][j] == 'O' && Gameboard[0][j] == '*')
			{
				MovePresent = true;
				Gameboard[0][j] = 'O';
				break;
			}
		}
	}
	//Checking Diagnol wise
	if (!MovePresent)
	{
		if (Gameboard[0][0] == 'O' && Gameboard[1][1] == 'O' && Gameboard[2][2] == '*')
		{
			MovePresent = true;
			Gameboard[2][2] = 'O';
		}
		else if (Gameboard[0][0] == 'O' && Gameboard[2][2] == 'O' && Gameboard[1][1] == '*')
		{
			MovePresent = true;
			Gameboard[1][1] = 'O';
		}
		else if (Gameboard[1][1] == 'O' && Gameboard[2][2] == 'O' && Gameboard[0][0] == '*')
		{
			MovePresent = true;
			Gameboard[0][0] = 'O';
		}
		else if (Gameboard[0][2] == 'O' && Gameboard[1][1] == 'O' && Gameboard[2][0] == '*')
		{
			MovePresent = true;
			Gameboard[2][0] = 'O';
		}
		else if (Gameboard[0][2] == 'O' && Gameboard[2][0] == 'O' && Gameboard[1][1] == '*')
		{
			MovePresent = true;
			Gameboard[1][1] = 'O';
		}
		else if (Gameboard[2][0] == 'O' && Gameboard[1][1] == 'O' && Gameboard[0][2] == '*')
		{
			MovePresent = true;
			Gameboard[0][2] = 'O';
		}
	}

	return MovePresent;

}
//*********************************************************
//	DEFINATION OF FUNCTION CheckDefensiveMove            **
//	This function checks if there is a defensive         **
//	move present and if there is one it takes the move.  **
//*********************************************************
bool CheckDefensiveMove(char Gameboard[][3])
{

	bool MovePresent = false;
	//Checking Row wise
	for (int i = 0; i < 3; i++)
	{
		if (Gameboard[i][0] == 'X' && Gameboard[i][1] == 'X' && Gameboard[i][2] == '*')
		{
			MovePresent = true;
			Gameboard[i][2] = 'O';
			break;
		}
		else if (Gameboard[i][0] == 'X' && Gameboard[i][2] == 'X' && Gameboard[i][1] == '*')
		{
			MovePresent = true;
			Gameboard[i][1] = 'O';
			break;
		}
		else if (Gameboard[i][1] == 'X' && Gameboard[i][2] == 'X' && Gameboard[i][0] == '*')
		{
			MovePresent = true;
			Gameboard[i][0] = 'O';
			break;
		}
	}
	//Checking column wise
	if (!MovePresent)
	{
		for (int j = 0; j < 3; j++)
		{
			if (Gameboard[0][j] == 'X' && Gameboard[1][j] == 'X' && Gameboard[2][j] == '*')
			{
				MovePresent = true;
				Gameboard[2][j] = 'O';
				break;
			}
			else if (Gameboard[0][j] == 'X' && Gameboard[2][j] == 'X' && Gameboard[1][j] == '*')
			{
				MovePresent = true;
				Gameboard[1][j] = 'O';
				break;
			}
			else if (Gameboard[1][j] == 'X' && Gameboard[2][j] == 'X' && Gameboard[0][j] == '*')
			{
				MovePresent = true;
				Gameboard[0][j] = 'O';
				break;
			}
		}
	}
	//Checking Diagnol wise
	if (!MovePresent)
	{
		if (Gameboard[0][0] == 'X' && Gameboard[1][1] == 'X' && Gameboard[2][2] == '*')
		{
			MovePresent = true;
			Gameboard[2][2] = 'O';
		}
		else if (Gameboard[0][0] == 'X' && Gameboard[2][2] == 'X' && Gameboard[1][1] == '*')
		{
			MovePresent = true;
			Gameboard[1][1] = 'O';
		}
		else if (Gameboard[1][1] == 'X' && Gameboard[2][2] == 'X' && Gameboard[0][0] == '*')
		{
			MovePresent = true;
			Gameboard[0][0] = 'O';
		}
		else if (Gameboard[0][2] == 'X' && Gameboard[1][1] == 'X' && Gameboard[2][0] == '*')
		{
			MovePresent = true;
			Gameboard[2][0] = 'O';
		}
		else if (Gameboard[0][2] == 'X' && Gameboard[2][0] == 'X' && Gameboard[1][1] == '*')
		{
			MovePresent = true;
			Gameboard[1][1] = 'O';
		}
		else if (Gameboard[2][0] == 'X' && Gameboard[1][1] == 'X' && Gameboard[0][2] == '*')
		{
			MovePresent = true;
			Gameboard[0][2] = 'O';
		}
	}

	return MovePresent;
}
//****************************************
//	DEFINATION OF FUNCTION RandomMove   **
//	This function takes a random move.  **
//****************************************
void RandomMove(char Gameboard[][3])
{
	int row = rand() % 3;
	int col = rand() % 3;
	while (Gameboard[row][col] != '*')
	{
		row = rand() % 3;
		col = rand() % 3;
	}
	Gameboard[row][col] = 'O';
}

//********************************************************
//	DEFINATION OF FUNCTION InputValidationInRange       **
//	This funtion validates an input of int              **
//	data type within a range.                           **
//********************************************************
void InputValidationInRange(int &input, int LowerBoundry, int HigherBoundry)
{
	while (input < LowerBoundry || input > HigherBoundry)
	{
		cout << "ERROR!! Invalid Input.\n"
			<< "Enter a value within the range " << LowerBoundry << "-" << HigherBoundry << " : ";
		cin >> input;
	}
	return;
}
