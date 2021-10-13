//#include <iostream>
//using namespace std;
//int* arrayAllocator(int);
//
//
//int main()
//{
//	int size;
//	int *pointer;
//	int i;
//
//	cout << "What size array do you want?" << endl;
//	cin >> size;
//	pointer = arrayAllocator(size);
//	for (i = 0; i < size; i++) {
//		pointer[i] = i;
//	}
//
//	cout << "The values in the array are:\n";
//	for (i = 0; i < size; i++) {
//		cout << "Element " << i << " has the value " << pointer[i] << endl;
//	}
//	delete[] pointer;
//	pointer = 0;
//	system("PAUSE");
//	return 0;
//}
//
//int* arrayAllocator(int num)
//{
//	int* arrPtr;
//	arrPtr = new int[num];
//	return arrPtr;
//}