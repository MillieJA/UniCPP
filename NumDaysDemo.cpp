//// Question 5
//#include "NumDays.h"
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	double h1;
//	double h2;
//	double h3;
//	double h4;
//	double h5;
//	double h6;
//	
//	cout << "Enter how many hours you have worked: " << endl;
//	cin >> h1;
//	NumDays nd = NumDays(h1);
//	nd.getDays();
//	cout << "Enter how many hours you have worked: " << endl;
//	cin >> h2;
//	NumDays nd2 = NumDays(h2);
//	nd2.getDays();
//
//	// + and - operators
//	cout << "The sum of hours is: " << h1 + h2 << " hours." << endl;
//	cout << "The difference is: " << h1 - h2 << " hours." << endl;
//
//	// ++ and -- prefix and postfix operators
//	cout << "(++hours) Enter how many hours you have worked: " << endl; // Prefix
//	cin >> h3;
//	NumDays nd3 = NumDays(++h3);
//	nd3.getHours();
//	nd3.getDays();
//
//	cout << "(hours++) Enter how many hours you have worked: " << endl; // Postfix
//	cin >> h4;
//	NumDays nd4 = NumDays(h4++);
//	nd4.getHours();
//	nd4.getDays();
//
//	cout << "(--hours) Enter how many hours you have worked: " << endl; // Prefix
//	cin >> h5;
//	NumDays nd5 = NumDays(--h5);
//	nd5.getHours();
//	nd5.getDays();
//
//	cout << "(hours--) Enter how many hours you have worked: " << endl; // Postfix
//	cin >> h6;
//	NumDays nd6 = NumDays(h6--);
//	nd6.getHours();
//	nd6.getDays();
//
//	system("PAUSE");
//	return 0;
//}