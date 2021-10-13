//#include <iostream>
//#include <string>
//#include <cctype>
//using namespace std;
//
//int wordCount(char *);
//int wordCount(string);
//
//int main()
//{
//	char cstring[81];
//	string strObj;
//
//	cout << "Please enter a c-string that is less than 80 characters: " << endl;
//	cin.getline(cstring, 81);
//	cout << "\nThe number of words in the c-string is ";
//	cout << wordCount(cstring) << endl;
//
//	cout << "\nEnter a string object of 80 or fewer characters:" << endl;
//	getline(cin, strObj);
//	cout << "\nThe number of words in the string object is ";
//	cout << wordCount(strObj) << endl;
//	return 0;
//}
//
//int wordCount(char* str) {
//	int numWords = 0;
//
//	while (*str++ != '\0') {
//		cout << *str << endl;
//		while (*str != '\0' && isspace(*str))
//		{
//			cout << *str << endl;
//			str++;
//		}
//
//		if (*str != '\0')
//			numWords++;
//
//		while (*str != '\0' && !isspace(*str))
//		{
//			cout << *str << endl;
//			str++;
//		}
//	}
//	return numWords;
//}
//int wordCount(string strObj)
//{
//	const char SPACE = ' ';
//	const char TAB = '\t';
//
//	int numSpaces = 0;
//	int numCharacters = 0;
//	int numWords = 0;
//
//	int length = strObj.length();
//
//	for (int i = 0; i < length; i++){
//		if (strObj.at(i) == SPACE || strObj.at(i) == TAB){
//			numSpaces++;
//			numCharacters = 0;
//		}
//		else {
//			numCharacters++;
//			numSpaces = 0;
//		}
//		if (numSpaces == 0 && numCharacters == 1)
//			numWords++;
//	}
//	return numWords;
//}
