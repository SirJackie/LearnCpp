#include <iostream>
#include <vector>
using namespace std;
int u4a5main() {
	vector<int> vi;
	for (int i = 0; i < 100; i++) {
		vi.push_back(i + 1);
	}

	for (int i = 0; i < 100; i++) {
		cout << vi[i] << " ";
	}
	cout << endl;

	vi.pop_back();
	vi.push_back(12345);

	for (int i = 0; i < 100; i++) {
		cout << vi[i] << " ";
	}
	cout << endl;

	return 0;
}