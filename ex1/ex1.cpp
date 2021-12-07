#include <iostream>
#include <vector>

using namespace std;

//table[0][0] && table[1][0] - VIP
//на каждого 3 прибора, випам + 1
//каждому по 2 тарелки, випам + 1
//каждому 1 стул
//table[0][4] +1 стул
//table[1][2] - 1 ложка
//table[0][0] - 1 ложка
//table[1][2] + 1 ложка
//table[0][0] - 1 тарелка

int main() {
	int table[2][12];

	for (int i = 0; i < 12; ++i) table[0][i] = 1;
	for (int i = 0; i < 12; ++i) table[1][i] = 1;

	string chair[1]{chair};
	
	int cutlery = 3;
	int vipCutlery = 4;
}