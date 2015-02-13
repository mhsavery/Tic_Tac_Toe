#include <iostream>

using namespace std;

bool gamedone, turn;
int choice, player;
string space[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

void win(bool x){

	if(x == true) {
		player = (player == 1) ? 2 : 1;
		cout << "Player " << player << " won!" << endl << endl;
	}
	else
	cout << "It's a tie!" << endl << endl;
	gamedone = true;
}

void checkwin(){
	
	if(space[1] == space[2] && space[2] == space[3]) win(true);
	else if (space[4] == space[5] && space[5] == space[6]) win(true);
	else if (space[7] == space[8] && space[8] == space[6]) win(true);
	else if	(space[1] == space[4] && space[4] == space[7]) win(true);
	else if (space[2] == space[5] && space[5] == space[8]) win(true);
	else if (space[3] == space[6] && space[6] == space[9]) win(true);
	else if (space[1] == space[5] && space[5] == space[9]) win(true);
	else if (space[3] == space[5] && space[5] == space[7]) win(true);
	else if (space[1] != "1" && space[2] != "2" && space[3] != "3" && space[4] != "4" && space[5] != "5" && space[6] != "6" && space[7] != "7" && space[8] != "8" && space[9] != "9") win(false);

}

int main() {

	start:
	gamedone = false;
	player = 1;
	guess:
	


	cout << "\nWelcome to my Tic Tac Toe game!\n";
	cout << "Player 1: X    Player 2: O\n\n";	

	cout << "       |       |	" << endl;

	cout << "   " << space[0][0] << "   |   " << space[0][1] << "   |  " << space[0][2] << endl;

	cout << "_______|_______|_______" << endl;
	cout << "       |       |	" << endl;

	cout << "   " << space[1][0] << "   |   " << space[1][1] << "   |  " << space[1][2] << endl;

	cout << "_______|_______|_______" << endl;
	cout << "       |       |       " << endl;

	cout << "   " << space[2][0] << "   |   " << space[2][1] << "   |  " << space[2][2] << endl;

	cout << "       |       |       " << endl << endl;

	checkwin();

	if(gamedone == true) goto start;
	cout << "Player " << player << ", choose a number:  ";
	cin >> choice;

	if(choice == 1 && space[0][0] == 1){
		space[0][0] = 'X';
		player = (player == 1) ? 2 : 1;
	}
	if(choice == 2 && space[0][1] == 2){
		space[0][1] = (player == 1) ? 'X' : 'O';
		player = (player == 1) ? 2 : 1;
	}
	if(choice == 3 && space[0][2] == 3){
		space[0][2] = (player == 1) ? 'X' : 'O';
		player = (player == 1) ? 2 : 1;
	}
	if(choice == 4 && space[1][0] == 4){
		space[1][0] = (player == 1) ? 'X' : 'O';
		player = (player == 1) ? 2 : 1;
	}
}
