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
	// ʹ�ô����ų�ʼ������
	int cards[4] = { 3, 6, 8, 10 };
	DisplayArray(cards, 4);

	// ֻдһ�����������������ʼ[0]λ�ã�����ȫ��Ϊ0
	int zeros[10] = { 0 };
	DisplayArray(zeros, 10);

	// �е�Bitches��Ϊ{1}����ȫ����1��
	// ����ʵ���ǣ�ֻ��[0]λ��Ϊ1������ȫ��Ϊ0
	int bitch[10] = { 1 };
	DisplayArray(bitch, 10);

	//�����ñ������Լ��㳤��
	int idontknow[] = { 1, 2, 3, 4, 5 };

	return 0;
}