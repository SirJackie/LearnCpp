#include <iostream>
#include <cstring>
using namespace std;

int u4a2main() {

	//��ʼ��C����ַ���
	char name[10] = { 'S', 'i', 'r', 'J', 'a', 'c', 'k', 'i', 'e', '\0' };
	char bird[11] = "Mr. Cheeps";
	char fish[] = "Bubbles";
	char buffer[100];

	//�������
	cout << name << bird << fish << endl;
	cout << "Please enter your name: ";
	cin >> buffer;
	cout << "Your name is: " << buffer << endl;
	cin.get();  // ���istream���в����\n�ַ�
	
	//������ո���ַ���
	cout << "Enter a string with space: ";
	cin.getline(buffer, 100);
	cout << "Your string is: " << buffer << endl;

	// string.h (cstring) �ṩ�ķ���
	strcpy(buffer, "strcpy");
	strcat(buffer, "strcat");
	cout << "Buffer: " << buffer << endl << "Length of buffer: " << strlen(buffer) << endl << "Size of buffer: " << sizeof(buffer) << endl;


	return 0;
}