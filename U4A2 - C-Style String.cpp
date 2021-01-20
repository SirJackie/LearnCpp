#include <iostream>
#include <cstring>
using namespace std;

int u4a2main() {

	//初始化C风格字符串
	char name[10] = { 'S', 'i', 'r', 'J', 'a', 'c', 'k', 'i', 'e', '\0' };
	char bird[11] = "Mr. Cheeps";
	char fish[] = "Bubbles";
	char buffer[100];

	//输入输出
	cout << name << bird << fish << endl;
	cout << "Please enter your name: ";
	cin >> buffer;
	cout << "Your name is: " << buffer << endl;
	cin.get();  // 清除istream流中残余的\n字符
	
	//输入带空格的字符串
	cout << "Enter a string with space: ";
	cin.getline(buffer, 100);
	cout << "Your string is: " << buffer << endl;

	// string.h (cstring) 提供的方法
	strcpy(buffer, "strcpy");
	strcat(buffer, "strcat");
	cout << "Buffer: " << buffer << endl << "Length of buffer: " << strlen(buffer) << endl << "Size of buffer: " << sizeof(buffer) << endl;


	return 0;
}