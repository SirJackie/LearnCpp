#include <iostream>
using namespace std;
void Clock(int nHour, int nMinute) {
	cout << "Time: " << nHour << ":" << nMinute
		 << endl;
}
int u2p7main() {
	int nHour, nMinute;
	cout << "Enter the number of hours: ";
	cin >> nHour;
	cout << "Enter the number of minutes: ";
	cin >> nMinute;
	Clock(nHour, nMinute);
	return 0;
}