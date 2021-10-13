////Question 1
//#include <iostream>
//using namespace std;
//#include "Date.h"
//#include <string>
//
//int main() {
//	int m;
//	int d;
//	int y;
//	cout << "Please enter the month number" << endl;
//	cin >> m;
//	// Check that the month number is valid (1-12)
//	// If  not, allow the user to input a different value
//	while (m < 1 || m > 12) {
//		cout << "Please enter a valid month number (1-12)" << endl;
//		cin >> m;
//	}
//	cout << "Please enter the day number" << endl;
//	cin >> d;
//	// Check that the day number is valid (1-31)
//	// If  not, allow the user to input a different value
//	while (d < 1 || d > 31) {
//		cout << "Please enter a valid day number (1-31)" << endl;
//		cin >> d;
//	}
//	cout << "Please enter the year" << endl;
//	cin >> y;
//	Date dt(m, d, y);
//	// Display date in format 1
//	cout << "The date in format 1 is :" << endl;
//	cout << dt.getFormat1() << endl;
//	// Display date in format 2
//	cout << "The date in format 2 is :" << endl;
//	cout << dt.getFormat2() << endl;
//	// Display date in format 3
//	cout << "The date in format 3 is :" << endl;
//	cout << dt.getFormat3() << endl;
//	system("PAUSE");
//	return 0;
//}