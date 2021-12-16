//Морской бой//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int ships = 4; // количество доступных кораблей данного размера.
int i;
int j;
int x;
int y;

void arrangement(int i, int j, int x, int y, int bf1[10][10], int bf2[10][10], int cells, int player, int bf[10][10]) {
	player == 1 ? bf = bf1 : bf = bf2;
	if (cells == 1) ships = 4;
	if (cells == 2) ships = 3;
	if (cells == 3) ships = 2;
	if (cells == 4) ships = 1;
	for (ships; ships > 0; --ships) {
		cout << ships << " left." << endl;
		cout << "Enter coordinates (y, x): "; //начальные координаты корабля
		do {
			cin >> i;
			if (i < 0 || i > 9) {
				cout << "Error! Invalid value." << endl;
			}
		} while (i < 0 || i > 9);
		do {
			cin >> j;
			if (j < 0 || j > 9) {
				cout << "Error! Invalid value." << endl;
			}
			if (bf[i][j] == 1) {
				cout << "Error! A ship crosses another ship." << endl;
			}
		} while (j < 0 || j > 9 || bf[i][j] == 1);
		if (cells > 1) {
			string direction;
			int cross;
			do{
				x = i;
				y = j;
				
				cross = 0;
				
				do {
					cout << "choose direction, right or down (r / d): "; //Направление в котором будет повернут корабль
					
					cin >> direction;
					
				} while (direction != "r" && direction != "d");
				
				if (direction == "r") { //вправо
					for (j; j < y + cells; ++j) {
						if (bf[i][j] == 1) {
							cout << "Error! A ship crosses another ship." << endl;
							cross = 1;
							--j;
							for (j; j >= y; --j) {
								bf[i][j] = 0;
							};
							++j;
							break;
						}
						else {
							bf[i][j] = 1;
						}
					}
				}
				else if (direction == "d") { //влево
					for (i; i < x + cells; ++i) {
						if (bf[i][j] == 1) {
							cout << "Error! A ship crosses another ship." << endl;
							cross = 1;
							--i;
							for (i; i >= x; --i) {
								bf[i][j] = 0;
							};
							++i;
							break;
						}
						else {
							bf[i][j] = 1;
						}
					}
				}
			} while ((direction == "r" && y + cells > 10) || (direction == "d" && x + cells > 10) || cross == 1);
		}
		else {
			bf[i][j] = 1;
		}
		for (i = 0; i < 10; ++i) { //вывод поля после установки корабля
			for (j = 0; j < 10; ++j) {
				cout << " " << bf[i][j];
			}
			cout << endl;
		}
	}
	player == 1 ? bf1 = bf : bf2 = bf;

}

int main() {
	int bf1[10][10]{ {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0} };

	int bf2[10][10]{ {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0},
					 {0,0,0,0,0,0,0,0,0,0} };

	char bf3[10][10]{ {'-','-','-','-','-','-','-','-','-','-'}, //доп поля для обозначения выстрелов
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'} };

	char bf4[10][10]{ {'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'},
						{'-','-','-','-','-','-','-','-','-','-'} };

	int player = 1; //номер игрока

	int bf[10][10]; //переменное поле

	cout << "Player 1, arrage ships!" << endl;

	for (int cells = 1; cells < 5; ++cells) {
		cells == 1 ? cout << cells << " cell ship," : cout << cells << " cells ship, ";
		arrangement(i, j, x, y, bf1, bf2, cells, player, bf);
		cout << "==============================" << endl;
	}

	player = 2;

	cout << "Player 2, arrage ships!" << endl;

	for (int cells = 1; cells < 5; ++cells) {
		cells == 1 ? cout << cells << " cell ship," : cout << cells << " cells ship, ";
		arrangement(i, j, x, y, bf1, bf2, cells, player, bf);
		cout << "==============================" << endl;
	}

	cout << endl << "<<<<< Player's 1 field >>>>>" << endl << endl; //вывод готового поля 1 игрока
	
	for (i = 0; i < 10; ++i) {
		for (j = 0; j < 10; ++j) {
			cout << " " << bf1[i][j];
		}
		cout << endl;
	}

	cout << endl << "<<<<< Player's 2 field >>>>>" << endl << endl; //вывод готового поля 2 игрока

	for (i = 0; i < 10; ++i) {
		for (j = 0; j < 10; ++j) {
			cout << " " << bf2[i][j];
		}
		cout << endl;
	}

	int fphp = 20;
	int sphp = 20;

	do {
		cout << endl << "<<<<< First player's turn >>>>>" << endl << endl; //ход первого игрока

		for (i = 0; i < 10; ++i) { //вывод поля перед выстрелом
			for (j = 0; j < 10; ++j) {
				cout << " " << bf4[i][j];
			}
			cout << endl;
		}

		do {
			cout << "Enter coordinates: ";
			cin >> i;
			cin >> j;
			if ((i < 0 || i > 9) || (j < 0 || j > 9)) {
				cout << "Error! Invalid values." << endl;
			}
			else if (bf4[i][j] != '-') {
				cout << "You have already shot here." << endl;
			}
		} while ((i < 0 || i > 9) || (j < 0 || j > 9) || (bf4[i][j] != '-'));

		if (bf2[i][j] == 1) {
			bf2[i][j] = 0;
			bf4[i][j] = 'X';
			sphp -= 1;
			cout << "Hit!" << endl;
		}
		else if (bf2[i][j] == 0) {
			bf4[i][j] = '*';
			cout << "Miss!" << endl;
		};

		cout << "Your's score: " << 20 - sphp << endl;

		cout << endl << "<<<<< Second player's turn >>>>>" << endl << endl; //ход второго игрока

		for (i = 0; i < 10; ++i) { //вывод поля перед выстрелом
			for (j = 0; j < 10; ++j) {
				cout << " " << bf3[i][j];
			}
			cout << endl;
		}

		do {
			cout << "Enter coordinates: ";
			cin >> i;
			cin >> j;
			if ((i < 0 || i > 9) || (j < 0 || j > 9)) {
				cout << "Error! Invalid values." << endl;
			}
			else if (bf3[i][j] != '-') {
				cout << "You have already shot here." << endl;
			}
		} while ((i < 0 || i > 9) || (j < 0 || j > 9) || (bf3[i][j] != '-'));

		if (bf1[i][j] == 1) {
			bf1[i][j] = 0;
			bf3[i][j] = 'X';
			fphp -= 1;
			cout << "Hit!" << endl;
		}
		else if (bf1[i][j] == 0) {
			bf3[i][j] = '*';
			cout << "Miss!" << endl;
		};
		cout << "Your's score: " << 20 - fphp << endl;
	} while (fphp != 0 && sphp != 0);

	fphp == 0 ? cout << "Second player WIN!" : cout << "First player WIN!";

	return 0;
}
