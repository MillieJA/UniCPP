////Question 8
//#include <iostream>
//using namespace std;
//#include "LinkedList.h"
//#include <string>
//
//int main() {
//	LinkedList list;
//	int subs;
//
//	list.appendNode("ONE");
//	list.insertNode("TWO");
//	list.appendNode("THREE");
//	list.appendNode("FOUR");
//	list.appendNode("FIVE");
//	list.appendNode("SIX");
//	list.appendNode("SEVEN");
//	list.appendNode("EIGHT");
//	list.appendNode("NINE");
//	list.appendNode("TEN");
//	/*list.appendNode("ELEVEN");
//	list.deleteNode("ELEVEN");*/
//	list.displayList();
//	cout << endl << "Enter the subscript of the position you want to view" << endl;
//	cin >> subs;
//	try {
//		list[subs];
//	}
//
//	// Errors
//	catch (LinkedList::InvalidSubscript) {
//		cout << "ERROR: Subscript is invalid. Please enter a value more than or equal to 0 and less than the linked list length." << endl;
//	}
//	cout << endl;
//	system("PAUSE");
//	return 0;
//}