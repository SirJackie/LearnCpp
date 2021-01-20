#include <iostream>
using namespace std;
int u4a4main() {

	// Declare a pointer
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* ptr = &(array[0]);
	cout << (int)ptr << endl;
	ptr = array;
	cout << (int)ptr << endl << endl;

	// Do some pointer calculation
	cout << *ptr << endl;
	ptr += 1;
	cout << *ptr << endl;
	ptr -= 1;
	ptr -= 1;
	cout << *ptr << endl << endl;
	//ptr = (int*)1158000;  // Error! Have no right to access

	// Use the pointer to alloc the memory
	ptr = new int;
	*ptr = 12345;
	cout << *ptr << " at " << (int)ptr << endl;
	delete ptr;
	cout << "Released. But ptr is still " << (int)ptr << endl;
	ptr = NULL;
	cout << "Now ptr is " << (int)ptr << endl << endl;

	// Alloc an array of memory
	cout << "Alloc an array of memory." << endl;
	cout << "Alloced. Now init and display it: ";
	ptr = new int[100];
	for (int i = 0; i < 100; i++) {
		ptr[i] = i + 1;
	}
	for (int i = 0; i < 100; i++) {
		cout << ptr[i] << " ";
	}
	cout << endl;
	delete [] ptr;
	cout << "Released." << endl;

	return 0;
}