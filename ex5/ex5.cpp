#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int matrix[4][4];

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			int n;
			cout << "input matrix [" << i << "][" << j << "] :";
			cin >> n;
			matrix[i][j] = n;
		}
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << "============================" << endl;

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			if (i != j) matrix[i][j] = 0;
		}
	}
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
