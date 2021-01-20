#include <iostream>
#include <string>
using namespace std;
int u4a3main() {

	//初始化
	string str1;
	string str2 = "panther";

	//输入输出
	cout << str2 << endl;
	cout << "Enter your name: ";
	cin >> str1;
	cout << "Your name is: " << str1 <<endl;
	cin.get();  // 清除istream流中残余的\n字符

	//输入带空格的字符串
	cout << "Enter your string with space: ";
	getline(cin, str1);  // string不是最早的C++成员
	                    // 所以cin不支持它
	cout << "Your string with space is: " << str1
		 << endl;

	// string自带的运算
	str1 = "strcpy";
	str2 = "strcat";
	string str3 = str1 + str2;
	str1 = str1 + "strcat";
	str1 += "strcat";
	cout << "Str1: " << str1 << endl << "Length of str1: " << str1.size() << endl << "Size of str1: " << sizeof(str1) << endl;

	return 0;
}