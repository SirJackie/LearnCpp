#include <iostream>
#include <string>
using namespace std;
int u4a3main() {

	//��ʼ��
	string str1;
	string str2 = "panther";

	//�������
	cout << str2 << endl;
	cout << "Enter your name: ";
	cin >> str1;
	cout << "Your name is: " << str1 <<endl;
	cin.get();  // ���istream���в����\n�ַ�

	//������ո���ַ���
	cout << "Enter your string with space: ";
	getline(cin, str1);  // string���������C++��Ա
	                    // ����cin��֧����
	cout << "Your string with space is: " << str1
		 << endl;

	// string�Դ�������
	str1 = "strcpy";
	str2 = "strcat";
	string str3 = str1 + str2;
	str1 = str1 + "strcat";
	str1 += "strcat";
	cout << "Str1: " << str1 << endl << "Length of str1: " << str1.size() << endl << "Size of str1: " << sizeof(str1) << endl;

	return 0;
}