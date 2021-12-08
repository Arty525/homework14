#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a[4][4];

	int b[4][4];

	bool equal = true;

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j){
			cout << "input A [" << i << "][" << j << "]";
			cin >> a[i][j];
			cout << "input B [" << i << "][" << j << "]";
			cin >> b[i][j];
			if (a[i][j] != b[i][j]) equal = false;
		}
	}
	equal ? cout << "equal" : cout << "not equal";
}
