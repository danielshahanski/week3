#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	long long id;
	double height;
	int coctails;

	cout << "ID: ";
	cin >> id;

	cout << "Height (in metres): ";
	cin >> height;

	cout << "Coctails for 10 minutes: ";
	cin >> coctails;

	int gender = (id / 10) % 10;

	if (gender % 2 == 0)
	{
		if (height > 1.75 && coctails >= 3)
		{
			cout << " You are waiter! " << endl;
		}
		else if (coctails >= 3)
		{
			cout << "You are barman! " << endl;
		}
		else
		{
			cout << "Thanks for you application! " << endl;
		}
	}
	else
	{
		if (height > 1.60 && coctails >= 3)
		{
			cout << " You are waitress " << endl;
		}
		else if (height > 1.60)
		{
			cout << "You are a barman! " << endl;
		}
		else
		{
			cout << "Thansk. bye! " << endl;
		}
	}
}

