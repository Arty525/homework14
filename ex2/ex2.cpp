#include <iostream>
#include <vector>

using namespace std;
char game[3][3];
char winner(char (*)[3]) {
	for (int s = 0; s < 3; ++s) {
		if (game[s][0] == game[s][1] && game[s][1] == game[s][2]) return game[s][0];
	}
	for (int c = 0; c < 3; ++c) {
		if (game[0][c] == game[1][c] && game[1][c] == game[2][c]) return game[0][c];
	}
}

int main() {
	
	int count = 0;
	int x;
	int y;

	do {
		do {
			cout << "Input X coordinates (x, y): ";
			cin >> x;
			cin >> y;
		} while (game[x][y] == 'X' || game[x][y] == 'O');
		game[x][y] = 'X';
		winner(game);
		if (winner(game) == 'X') {
			cout << "WINNER: X" << endl;
			break;
		}
		else if (winner(game) == 'O') {
			cout << "WINNER: X" << endl;
			break;
		}
		++count;
		do {
			cout << "Input O coordinates (x, y): ";
			cin >> x;
			cin >> y;
		} while (game[x][y] == 'X' || game[x][y] == 'O');
		game[x][y] = 'O';
		winner(game);
		if (winner(game) == 'X') {
			cout << "WINNER: X" << endl;
			break;
		}
		else if (winner(game) == 'O') {
			cout << "WINNER: X" << endl;
			break;
		}
		++count;
	} while (count != 9);
}