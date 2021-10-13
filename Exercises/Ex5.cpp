#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	const int MIN = 50;
	const int MAX = 500;

	unsigned int seed = time(0);

	srand(seed);

	int num1 = MIN + rand() % MAX;
	int num2 = MIN + rand() % MAX;

	cout << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << "-----\n\n";
	cout << "Press enter to see the answer...\n";
	cin.get();
	int sum = num1 + num2;
	cout << sum << endl;
	system("PAUSE");
	return 0;
}