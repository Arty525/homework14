#include <iostream>
#include <vector>

using namespace std;

int main() {
	int chairs[2][12]{ {1,1,1,1,1,1,1,1,1,1,1,1},
					   {1,1,1,1,1,1,1,1,1,1,1,1} };

	int fork[2][12]{ {1,1,1,1,1,1,1,1,1,1,1,1},
					 {1,1,1,1,1,1,1,1,1,1,1,1} };

	int spoon[2][12]{ {1,1,1,1,1,1,1,1,1,1,1,1},
					  {1,1,1,1,1,1,1,1,1,1,1,1} };

	int knife[2][12]{ {1,1,1,1,1,1,1,1,1,1,1,1},
					  {1,1,1,1,1,1,1,1,1,1,1,1} };

	int dessertSpoon[2][12]{ {1,0,0,0,0,0,0,0,0,0,0,0},
							 {1,0,0,0,0,0,0,0,0,0,0,0} };

	int platefor1[2][12]{ {1,1,1,1,1,1,1,1,1,1,1,1},
						  {1,1,1,1,1,1,1,1,1,1,1,1} };

	int platefor2[2][12]{ {1,1,1,1,1,1,1,1,1,1,1,1},
						  {1,1,1,1,1,1,1,1,1,1,1,1} };

	int dessertPlate[2][12]{ {1,0,0,0,0,0,0,0,0,0,0,0},
							 {1,0,0,0,0,0,0,0,0,0,0,0} };

	//Пришла дама с ребенком
	chairs[0][4] += 1;

	//Украдена ложка
	spoon[1][2] -= 1;

	//VIP поделился десертной ложкой
	dessertSpoon[0][0] -= 1;
	spoon[1][2] += 1;

	//Убрали десертную тарелку
	dessertPlate[0][0] -= 1;

	cout << "Chairs: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << chairs[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Forks: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << fork[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Spoons: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << spoon[i][j] << " ";
		}
		cout << endl;
	}

	cout << "knives: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << knife[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Dessert spoons: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << dessertSpoon[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Plates for first course: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << platefor1[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Plates for second course: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << platefor2[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Dessert plates: " << endl;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 12; ++j) {
			cout << dessertPlate[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}