//Морской бой//
//добавить просмотр расстановки кораблей на поле после каждого ввода.
//расстановку многоклеточных перевести в функцию с проверкой ввода, возможно упростить ввод выбором направления.
#include <iostream>
#include <vector>

using namespace std;

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

	int ships1 = 4;
	int ships2 = 3;
	int ships3 = 2;
	int ships4 = 1;
	int i;
	int j;
	int x;
	int y;

	cout << "Player 1, arrage ships!" << endl;

	cout << "1 cell ship, ";

	for (ships1; ships1 > 0; --ships1) {
		cout << ships1 << " left." << endl;
		cout << "enter coordinates(x,y): ";
		cin >> i;
		cin >> j;
		bf1[i][j] = 1;
	}

	cout << "2 cell ship, ";

	for (ships2; ships2 > 0; --ships2) {
		cout << ships2 << " left." << endl;
		cout << "enter first coordinates(x,y): ";
		cin >> i;
		cin >> j;
		cout << "enter first coordinates(x,y): ";
		cin >> x;
		cin >> y;
		for (i; i <= x; ++i) {
			for (j; j <= y; ++j) {
				bf1[i][j] = 1;
			}
		}
	}

	cout << "3 cell ship, ";

	for (ships3; ships3 > 0; --ships3) {
		cout << ships3 << " left." << endl;
		cout << "enter first coordinates(x,y): ";
		cin >> i;
		cin >> j;
		cout << "enter first coordinates(x,y): ";
		cin >> x;
		cin >> y;
		for (i; i <= x; ++i) {
			for (j; j <= y; ++j) {
				bf1[i][j] = 1;
			}
		}
	}

	cout << "4 cell ship, ";

	for (ships4; ships4 > 0; --ships4) {
		cout << ships4 << " left." << endl;
		cout << "enter first coordinates(x,y): ";
		cin >> i;
		cin >> j;
		cout << "enter first coordinates(x,y): ";
		cin >> x;
		cin >> y;
		for (i; i <= x; ++i) {
			for (j; j <= y; ++j) {
				bf1[i][j] = 1;
			}
		}
	}

	for (i = 0; i < 10; ++i) {
		for (j = 0; j < 10; ++j) {
			cout << bf1[i][j];
		}
		cout << endl;
	}
}