#include <iostream>
using namespace std;
struct Student {
	char firstname[100];
	char lastname[100];
	char grade;
	int age;
};
int u4p1main() {
	Student stu;
	cout << "Your First Name: ";
	cin.getline(stu.firstname, 100);
	cout << "Your Last Name: ";
	cin.getline(stu.lastname, 100);
	cout << "Grade You Deserve; ";
	cin >> stu.grade;
	cout << "Your Age: ";
	cin >> stu.age;

	stu.grade += (char)1;

	cout << "Name: " << stu.lastname << ", " << stu.firstname << endl;
	cout << "Grade: " << stu.grade << endl;
	cout << "Age: " << stu.age << endl;

	return 0;
}