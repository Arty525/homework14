#include <iostream>
#include <vector>

using namespace std;

int main() {
	int snake[5][5];
	int n = 0;
		for (int x = 0; x < 5; ++x) {
			for (int y = 0; y < 5 && (x == 0 || x == 2 || x == 4); ++y) {
				snake[x][y] = n;
				cout << snake[x][y];
				++n;
			}
			for (int y = 0; y < 5 && (x == 1 || x == 3); ++y) {
				snake[x][4 - y] = n;
				cout << snake[x][4 - y];
				++n;
			}
			cout << endl;
		}
	return 0;
}