#include<iostream.h>

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Print the upper half of the diamond
    for (int i = 0; i < rows; i++) {
	// Print spaces
	for (int j = 0; j < rows - i - 1; j++) {
	    cout << " ";
	}
	// Print asterisks
	for (int k = 0; k <= i; k++) {
	    cout << "* ";
	}
        cout << endl;
    }

    // Print the lower half of the diamond
    for (i = rows - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        // Print asterisks
        for (int k = 0; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}