#include <iostream>
using namespace std;
int u2p5main() {
	cout << "Please enter a Celsius value: ";
	int cel;
	cin >> cel;

	int fah = 1.8 * cel + 32.0;
	cout << cel << " degrees Celsius is " << fah << " degrees Fahrenheit." << endl;

	return 0;
}