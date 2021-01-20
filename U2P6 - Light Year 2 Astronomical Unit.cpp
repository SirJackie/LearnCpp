#include <iostream>
using namespace std;
int u2p6main() {
	cout << "Enter Light Year(s): " << endl;
	double nLightYear;
	cin >> nLightYear;
	double nAUnit = 63240.0 * nLightYear;
	cout << "Converted Result is(Astronomical Units): "
		 << nAUnit;
	return 0;
}