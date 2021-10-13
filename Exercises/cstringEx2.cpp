//#include <iostream>
//#include <cstring>
//using namespace std;
//
//void sBackwards(char*);
//
//int main()
//{
//	char string[81];
//
//	cout << "Please enter a string that is less than 80 characters: " << endl;
//	cin.getline(string, 81);
//	cout << "\nThe string backwards is " << endl;
//	sBackwards(string);
//	return 0;
//}
//
//void sBackwards(char* str) {
//
//	int len = strlen(str);
//	char* ptr = (str + len);
//	while (ptr-- != str)
//		cout << *ptr;
//}