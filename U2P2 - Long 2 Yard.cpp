#include <iostream>

using namespace std;

int u2p2main() {
	// 1 long = 220 yards
	cout << "Please Enter the Length to Convert(long):"
		 << endl;
	int nLong;
	cin >> nLong;
	int nYard = 220 * nLong;
	cout << "Converted. Result(Yard): " << nYard
		 << endl;
	return 0;
}
