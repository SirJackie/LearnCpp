#include <iostream>
using namespace std;
struct nCandyBar {
	char brand[20];
	double weight;
	int calories;
};
void nDisplayCandyBar(nCandyBar* can) {
	cout << "<----------" << endl;
	cout << "\tCandybar at " << (int)can << endl;
	cout << "\tBrand: " << can->brand << endl;
	cout << "\tWeight: " << can->weight << endl;
	cout << "\tCalories: " << can->calories << endl;
	cout << "---------->" << endl;
}
int main() {
	int size;
	cout << "How much CandyBar do you have?" << endl;
	cin >> size;

	nCandyBar* canlist = new nCandyBar[size];

	for (int i = 0; i < size; i++) {
		cout << "----------" << i + 1
			 << "----------" << endl;
		cout << "Brand: ";
		cin >> canlist[i].brand;
		cout << "Weight: ";
		cin >> canlist[i].weight;
		cout << "Calories: ";
		cin >> canlist[i].calories;
	}

	for (int i = 0; i < size; i++) {
		nDisplayCandyBar(canlist + i);
	}

	delete[] canlist;

	return 0;
}