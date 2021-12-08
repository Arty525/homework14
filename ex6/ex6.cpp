#include <iostream>
#include <vector>

using namespace std;

int main() {
	float a[4][4];
	float b[4][4];
	float c[4][4];

	cout << "input A matrix 4 x 4 separated by space: " << endl;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			float n;
			cin >> n;
			a[i][j] = n;
		}
	}

	cout << "input B matrix 4 x 4 separated by space: " << endl;
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			float n;
			cin >> n;
			b[i][j] = n;
		}
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout << "===================" << endl;

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			c[i][j] = 0.0;
			for (int x = 0; x < 4; ++x) {
				c[i][j] += a[i][x] * b[x][j];
			}
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}