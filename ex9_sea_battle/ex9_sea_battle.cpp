//Морской бой//
//добавить просмотр расстановки кораблей на поле после каждого ввода.
//расстановку многоклеточных перевести в функцию с проверкой ввода, возможно упростить ввод выбором направления.
#include <iostream>
#include <vector>

using namespace std;

int ships = 4;
int i;
int j;
int x;
int y;

void arrangement(int i, int j, int x, int y, int bf1[10][10], int cells) {
	if (cells == 1) ships = 4;
	if (cells == 2) ships = 3;
	if (cells == 3) ships = 2;
	if (cells == 4) ships = 1;
	for (ships; ships > 0; --ships) {
		cout << ships << " left." << endl;
		cout << "Enter coordinates (x, y): ";
		cin >> i;
		cin >> j;
		if (cells > 1) {
			string direction;
			cout << "choose direction, right or down (r / d): ";
			cin >> direction;
			if (direction == "r") {
				x = i + cells - 1;
				y = j;
			}
			else if (direction == "d") {
				x = i;
				y = j + cells - 1;
			}
			for (i; i <= x; ++i) {
				for (j; j <= y; ++j) {
					bf1[i][j] = 1;
				}
			}
		}
	}
}

int main() {
	int bf1[10][10]{ {0000000000},
					 {0000000000}, 
					 {0000000000}, 
					 {0000000000}, 
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000} };

	int bf2[10][10]{ {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000},
					 {0000000000} };

	cout << "Player 1, arrage ships!" << endl;

	for (int cells = 1; cells < 5; ++cells) {

		cells == 1 ? cout << cells << " cell ship," : cout << cells << " cells ship, ";

		arrangement(i, j, x, y, bf1, cells);

		for (i = 0; i < 10; ++i) {
			for (j = 0; j < 10; ++j) {
				cout << bf1[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}