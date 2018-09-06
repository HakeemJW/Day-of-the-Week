// C++ Program			DayoftheWeek.cpp
// Course				CSE1311/900
// Name:				Hakeem Wilson
// Assignment #:		Project 1
// Due Date:			09/17/2017

/* The purpose of this program is to allow the user to calculate the day of the week by the date of any day.*/

#include <iostream>
#include <cmath>

using namespace std;

	int main()
	{
		//Variables
		int j, k, m, q, h; 
		
		//User Input
		cout << "Enter the century (first two digits of desired year)" << endl;
			cin >> j;
		cout << "Enter the last two digits of the year" << endl;
			cin >> k;
			cout << endl; 	
		cout << "Enter the number of the month" << endl;
			cin >> m;
			cout << endl;
		cout << "Enter the day of the month" << endl;
			cin >> q;
		
		//Zeller's Congruence (The fomula to calculate the day of the week)
		h = (q + 26*(m + 1)/10 + k + k/4 + j/4 + 5*j)%7;
			
		//Output
		cout << "The day of the week is: " << endl;
		cout << endl;
		
		//Switch Statements (These convert the value of h to a day of the week)
		switch (h)
		{
			case 0: cout << "Saturday" << endl;
				break;
			case 1: cout << "Sunday" << endl;
				break;
			case 2: cout << "Monday" << endl;
				break;
			case 3: cout << "Tuesday" << endl;
				break;
			case 4: cout << "Wednesday" << endl;
				break;
			case 5: cout << "Thursday" << endl;
				break;
			case 6: cout << "Friday" << endl;
				break;		
		}
		return 0;
	}
