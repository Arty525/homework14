#include <iostream>
#include <vector>

using namespace std;

int bubbles = 144;
void pop(bool pimple[12][12], int a, int b, int x, int y) {
	for (int i = a; i <= x; ++i) {
		for (int j = b; j <= y; ++j) {
			if (pimple[i][j]) {
				cout << "POP! ";
				pimple[i][j] = false;
				--bubbles;
			}
			else {
				cout << "X ";
			}
		}
		cout << endl;
	}
}

int main() {
	bool pimple[12][12]{ { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true },
						 { true, true, true, true, true, true, true, true, true, true, true, true } };
	int a, b, x, y;
	while (bubbles != 0) {
		for (int i = 0; i < 12; ++i) {
			for (int j = 0; j < 12; ++j) {
				cout << (pimple[i][j] ? "O" : "X") << " ";
			}
			cout << endl;
		}
		cout << "=====================" << endl;
		cout << "Enter the boundaries of the region." << endl << "start: " << endl;
		cin >> a;
		cin >> b;
		if (a < 0 || b < 0 || a > 11 || b > 11) {
			cout << "Error! values are out of range.";
			return 0;
		}
		cout << "end: " << endl;
		cin >> x;
		cin >> y;
		if (x < 0 || y < 0 || x > 11 || y > 11 || x < a || y < b) {
			cout << "Error! values are out of range.";
			return 0;
		}
		pop(pimple, a, b, x, y);
		cout << "=====================" << endl;
	}
}