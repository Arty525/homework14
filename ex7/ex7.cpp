#include <iostream>
#include <vector>

using namespace std;

void pop(bool pimple[12][12], int a, int b, int x, int y, int bubbles) {
	for (int i = a; i <= x; ++i) {
		for (int j = b; j <= y; ++j) {
			if (pimple[i][j]) {
				cout << "POP! ";
				pimple[i][j] = false;
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
	int bubbles = 0;
	while (bubbles != 144) {
		for (int i = 0; i < 12; ++i) {
			for (int j = 0; j < 12; ++j) {
				cout << (pimple[i][j] ? "O" : "X") << " ";
			}
			cout << endl;
		}
		cout << "Enter the boundaries of the region." << endl << "start: ";
		cin >> a;
		cin >> b;
		cout << "end: ";
		cin >> x;
		cin >> y;
		pop(pimple, a, b, x, y, bubbles);
		cout << bubbles;
	}
}