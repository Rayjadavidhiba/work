#include<iostream.h>

int main()
{
    int day;
    cout << "\nEnter the Day's number (1-7): ";
    cin >> day;

    switch (day)
    {
	case 1:
	    cout << "Monday";
	    break;
	case 2:
	    cout << "Tuesday";
	    break;
	case 3:
	    cout << "Wednesday";
	    break;
	case 4:
	    cout << "Thursday";
	    break;
	case 5:
	    cout << "Friday";
	    break;
	case 6:
	    cout << "Saturday";
	    break;
	case 7:
	    cout << "Sunday";
	    break;
	default:
	    cout << "Not a valid weekday.";
	    break;
    }
    return 0;
}