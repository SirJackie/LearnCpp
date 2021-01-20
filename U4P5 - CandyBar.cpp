#include <iostream>
using namespace std;
struct CandyBar {
	char brand[20];
	double weight;
	int calories;
};
void DisplayCandyBar(CandyBar* can) {
	cout << "<----------" << endl;
	cout << "\tCandybar at " << (int)can << endl;
	cout << "\tBrand: " << can->brand << endl;
	cout << "\tWeight: " << can->weight << endl;
	cout << "\tCalories: " << can->calories << endl;
	cout << "---------->" << endl;
}
int u4p5main() {
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	DisplayCandyBar(&snack);

	CandyBar canlist[] = {
		{
			"Coca Cola",
			3.1,
			1600
		},
		{
			"Pepsi Cola",
			3.2,
			1700
		},
		{
			"Asses' Cola",
			3.3,
			1800
		}
	};
	
	CandyBar* canptr = canlist;
	for (int i = 0; i < 3; i++) {
		DisplayCandyBar(canptr + i);
	}

	return 0;
}