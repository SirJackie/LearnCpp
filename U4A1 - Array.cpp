#include <iostream>
using namespace std;
void DisplayArray(int* array, int length) {
	cout << "Array at " << (int)array << " : ";
	for (int i = 0; i < length; i++) {
		cout << array[i] << ", ";
	}
	cout << endl;
}
int u4a1main() {
	// 使用大括号初始化数组
	int cards[4] = { 3, 6, 8, 10 };
	DisplayArray(cards, 4);

	// 只写一个数，就用这个数初始[0]位置，其他全部为0
	int zeros[10] = { 0 };
	DisplayArray(zeros, 10);

	// 有的Bitches认为{1}就是全部清1了
	// 但其实不是，只有[0]位置为1，其他全部为0
	int bitch[10] = { 1 };
	DisplayArray(bitch, 10);

	//可以让编译器自己算长度
	int idontknow[] = { 1, 2, 3, 4, 5 };

	return 0;
}