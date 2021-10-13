//// This program uses the insertion sort algorithm to sort an
//// array in ascending order.
//#include <iostream>
//using namespace std;
//
//// Function prototypes
//void insertionSort(int[], int);
//void showArray(int[], int);
//
//int main()
//{
//	// Define an array with unsorted values
//	const int SIZE = 7;
//	int values[SIZE] = {101, 27, 33, 45, 27, 68, 55};
//
//	// Display the values.
//	cout << "The unsorted values are\n";
//	showArray(values, SIZE);
//
//	// Sort the values.
//	insertionSort(values, SIZE);
//
//	// Display the values again.
//	cout << "The sorted values are\n";
//	showArray(values, SIZE);
//	system("PAUSE");
//	return 0;
//}
//
////**************************************************************
//// Definition of function insertionSort.                       *
//// This function performs an ascending order insertion sort on *
//// array. size is the number of elements in the array.         *
////**************************************************************
//
//void insertionSort(int array[], int size)
//{
//	int unsortedValue;  // The first unsorted value
//	int scan;           // Used to scan the array
//
//	// The outer loop steps the index variable through 
//	// each subscript in the array, starting at 1. The portion of
//	// the array containing element 0  by itself is already sorted.
//	for (int index = 1; index < size; index++)
//	{
//		// The first element outside the sorted portion is
//		// array[index]. Store the value of this element
//		// in unsortedValue.
//		unsortedValue = array[index];
//
//		// Start scan at the subscript of the first element
//		// outside the sorted part.
//		scan = index;
//
//		// Move the first element in the still unsorted part
//		// into its proper position within the sorted part.
//		while (scan > 0 && array[scan - 1] > unsortedValue)
//		{
//			array[scan] = array[scan - 1];
//			scan--;
//		}
//		// Insert the unsorted value in its proper position
//		// within the sorted subset.
//		array[scan] = unsortedValue;
//		showArray(array, size);
//	}
//}
//
////**************************************************************
//// Definition of function showArray.                           *
//// This function displays the contents of array. size is the   *
//// number of elements.                                         *
////**************************************************************
//
//void showArray(int array[], int size)
//{
//	for (int count = 0; count < size; count++)
//		cout << array[count] << " ";
//	cout << endl;
//}