//// This program uses the bubble sort algorithm to sort an
//// array in ascending order.
//#include <iostream>
//using namespace std;
//
//// Function prototypes
//void sortArray(int[], int);
//void showArray(const int[], int);
//
//int main()
//{
//	// Array of unsorted values
//	int values[6] = {101, 22, 44, 57, 45, 77};
//
//	// Display the values.
//	cout << "The unsorted values are:\n";
//	showArray(values, 6);
//
//	// Sort the values.
//	sortArray(values, 6);
//
//	// Display them again.
//	cout << "The sorted values are:\n";
//	showArray(values, 6);
//	return 0;
//}
//
////***********************************************************
//// Definition of function sortArray                         *
//// This function performs an ascending order bubble sort on *
//// array. size is the number of elements in the array.     *
////***********************************************************
//
//void sortArray(int array[], int size)
//{
//	bool swap;
//	int temp;
//	int exchange = 1;
//	do
//	{
//		swap = false;
//		for (int count = 0; count < (size - 1); count++)
//		{
//			if (array[count] > array[count + 1])
//			{
//				temp = array[count];
//				array[count] = array[count + 1];
//				array[count + 1] = temp;
//				swap = true;
//				cout << "Array after exchange " << exchange << endl;
//				showArray(array, size);
//				exchange++;
//			}
//		}
//	} while (swap);
//	cout << endl << "It took " << (exchange - 1) << " exchanges to sort this array." << endl << endl;
//}
//
////*************************************************************
//// Definition of function showArray.                          *
//// This function displays the contents of array. size is the *
//// number of elements.                                        *
////*************************************************************
//
//void showArray(const int array[], int size)
//{
//	for (int count = 0; count < size; count++)
//		cout << array[count] << " ";
//	cout << endl;
//}