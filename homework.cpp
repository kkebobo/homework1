#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int first_number,second_number, third_number;
	cout << "What is the first number?";
	cin >> first_number;
	cout << "What is the second number?";
	cin >> second_number;
	cout << "What is the third number?";
	cin >> third_number;

	cout << "average is " << (first_number + second_number + third_number) / 3 << "\n";
}

