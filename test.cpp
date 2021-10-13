
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void sort(double*, int);
double average(double*, int);

int main()
{
	int size;    // The number of test scores
	double* pointer; // To point to an array
	double testAverage;   // The test score average

	// Get the number of test scores.
	cout << "How many test scores will you enter? ";
	cin >> size;

	// Validate the input.
	while (size < 0)
	{
		cout << "The umber cannot be negative.\n";
		cout << "Enter another number: ";
		cin >> size;
	}

	// Allocate an array to hold the test scores.
	pointer = new double[size];

	// Fill the array with test scores.
	for (int i = 0; i < size; i++)
	{
		// Get a test score.
		cout << "Enter test score "
			<< (i + 1) << ": ";
		cin >> pointer[i];

		// Validate the input.
		while (size < 0)
		{
			cout << "Negative scores are not allowed.\n";
			cout << "Enter another score for this test: ";
			cin >> pointer[i];
		}
	}

	// Sort the test scores.
	sort(pointer, size);

	// Get the average of the test scores.
	testAverage = average(pointer, size);

	// Display the resulting data.
	cout << "\nThe test scores in ascending "
		<< "order, and their average, are:\n\n";
	cout << " Score" << endl;
	cout << " -----" << endl;

	for (int j = 0; j < size; j++)
	{
		cout << "\n" << fixed << setprecision(2)
			<< setw(6) << pointer[j];
	}

	cout << "\n\nAverage score:  " << setprecision(2)
		<< fixed << testAverage << endl << endl;

	// Free the dynamically-allocated memory.
	delete[] pointer;
	pointer = 0;

	return 0;
}

// ********************************************************
// The sort function performs a selection sort on the     *
// array pointed to by the score parameter into ascending *
// order. The size parameter holds the number of elements.*
// ********************************************************
void sort(double* score, int size)
{
	int startScan, minIndex;
	double minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = score[startScan];

		for (int index = startScan + 1; index < size; index++)
		{
			if (score[index] < minValue)
			{
				minValue = score[index];
				minIndex = index;
			}
		}

		score[minIndex] = score[startScan];
		score[startScan] = minValue;
	}
}

// ********************************************************
// The average function calculates and returns the        *
// average of the values stored in the array passed into  *
// the scores parameter. The parameter numScores holds    *
// the number of elements in the array.                   *
// ********************************************************
double average(double* score, int numScores)
{
	double total = 0; // Accumulator

	// Calculate the total of the scores.
	for (int k = 0; k < numScores; k++)
		total += score[k];

	// Return the average score.
	return (total / numScores);
}