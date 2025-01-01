#include<iostream.h>

void printPyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
	// print spaces
	for (int j = 0; j < height - i - 1; j++)
	{
	    cout << " ";
	}
	// print stars
	for (int k = 0; k <= i; k++)
	{
	    cout << "* ";
	}
	cout << endl;
    }
}

int main() {
    int height;
    cout << "Enter the height of the pyramid: ";
    cin >> height;
    printPyramid(height);
    return 0;
}