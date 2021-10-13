//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//void sort(double*, int);
//double average(double*, int);
//
//int main()
//{
//	int size;
//	double* pointer;
//	double testAverage;
//
//	cout << "How many test scores do you want to enter? ";
//	cin >> size;
//	while (size < 0)
//	{
//		cout << "The number cannot be negative.\n";
//		cout << "Enter another number: ";
//		cin >> size;
//	}
//
//	pointer = new double[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		// Get a test score.
//		cout << "Enter test score " << (i + 1) << ": ";
//		cin >> pointer[i];
//
//		// Validate the input.
//		while (size < 0)
//		{
//			cout << "Negative scores are not allowed.\n";
//			cout << "Enter another score for this test: ";
//			cin >> pointer[i];
//		}
//	}
//
//	sort(pointer, size);
//
//	testAverage = average(pointer, size);
//
//	cout << "***********************\nScores:" << endl;
//	for (int i = 0; i < size; i++) {
//		cout << "Test " << (i + 1) << ": " << pointer[i] << endl;
//	}
//	cout << "***********************" << endl;
//
//	cout << "The test scores in ascending order are:\n";
//	cout << " Score" << endl;
//	cout << " -----" << endl;
//
//	for (int j = 0; j < size; j++)
//	{
//		cout << "\n" << fixed << setprecision(2)
//			<< setw(6) << pointer[j];
//	}
//
//	cout << "\n\nAverage score:  " << setprecision(2)
//		<< fixed << testAverage << endl << endl;
//
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
//
//void sort(double*, int) {
//
//}
//
//double average(double*, int) {
//
//}