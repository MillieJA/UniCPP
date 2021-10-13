#include <iostream>
using namespace std;

const int MONTHS = 12;

struct WeatherData {
	double totalRainfall;
	double highestTemp;
	double lowestTemp;
	double avgTemp;
};

int main()
{
	WeatherData year[MONTHS];
	int i = 0;

	cout << "Enter the following information:\n";

	for (i = 0; i < MONTHS; i++)
	{
		cout << "Month " << (i + 1) << endl;
		cout << "\tTotal Rainfall: ";
		cin >> year[i].totalRainfall;

		cout << "\tHigh Temperature: ";
		cin >> year[i].highestTemp;

		if (year[i].highestTemp < -100 || year[i].highestTemp > 140)
		{
			cout << "ERROR: Temperature must be in the range of -100 through 140.\n";
			cout << "\tHigh Temperature: ";
			cin >> year[i].highestTemp;
		}

		cout << "\tLow Temperature: ";
		cin >> year[i].lowestTemp;

		if (year[i].lowestTemp < -100 || year[i].lowestTemp > 140)
		{
			cout << "ERROR: Temperature must be in the range of -100 through 140.\n";
			cout << "\tLow Temperature: ";
			cin >> year[i].lowestTemp;
		}

		year[i].avgTemp =
			(year[i].highestTemp + year[i].lowestTemp) / 2.0;
	}

	double totalRain = 0;
	for (i = 0; i < MONTHS; i++)
		totalRain += year[i].totalRainfall;

	double aveMonthRain = totalRain / MONTHS;

	double aveTotal = 0, aveAve;
	for (i = 1; i < MONTHS; i++)
		aveTotal += year[i].avgTemp;
	aveAve = aveTotal / MONTHS;

	double highest, lowest, highMonth = 0, lowMonth = 0;
	highest = year[0].highestTemp;
	lowest = year[0].lowestTemp;
	for (i = 1; i < MONTHS; i++)
	{
		if (year[i].highestTemp > highest)
		{
			highest = year[i].highestTemp;
			highMonth = i;
		}

		if (year[i].lowestTemp < lowest)
		{
			lowest = year[i].lowestTemp;
			lowMonth = i;
		}
	}
	// Display findings.
	cout << "\nTotal Rainfall: " << totalRain << endl;
	cout << "Average Monthly Rain: " << aveMonthRain << endl;
	cout << "Average Monthly Average Temperature: " << aveAve << endl;
	cout << "Highest Temperature: " << highest << "  (Month " << (highMonth + 1) << ")\n";
	cout << "Lowest Temperature: " << lowest << "  (Month " << (lowMonth + 1) << ")\n\n";
	system("PAUSE");
	return 0;
}