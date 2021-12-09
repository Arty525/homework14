#include <iostream>
#include <vector>

using namespace std;

int main() {
	int landscape[5][5][10];

	cout << "Enter block's height: " << endl;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			int h;
			cout << "block[" << i << "][" << j << "]: ";
			cin >> h;
			for (int x = 0; x < 10; ++x) x < h ? landscape[i][j][x] = 1 : landscape[i][j][x] = 0;
		}
	}

	int h;
	cout << "Enter section height: ";
	cin >> h;

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << landscape[i][j][h];
		}
		cout << endl;
	}
}