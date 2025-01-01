#include<conio.h>
#include<iostream.h>
void main()
{
	const float pi=3.14;
	float R,Area;
	clrscr();
	cout<<"enter radius: ";
	cin>>R;
	Area=pi*(R*R);
	cout<<"Area of circle is :" <<Area;
	getch();

}