//insertion sort.......using array
#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
#define size 10
void inssort (int a[]);
void disp(int a[]);
void main()
{
	int i,data[size];

	for(i=0; i<size; i++)
	//data[i]=rand()%1000;
	cin>>data[i];
	cout<<"\nbefore sorting ...\n";
	disp(data);
	cout<<"\n after sorting....\n";
	inssort(data);
	disp(data);


}
	void inssort(int a[])
	{
		int insout , insin, insmin,count=0;
		for(insout=1; insout<size; insout++)
		{
			insmin=a[insout];
			insin=insout;
			while(a[insin-1]>insmin && insin>=1)
			{
				a[insin]=a[insmin-1];
				insin--;
				count++;
			}
			a[insin]=a[insin-1];
		}
		cout<<"\ntotal interation %d\n",count;
	}
	void disp(int a[])
	{
		int i;
		for(i=0; i<size; i++)
		cout<<a[i];
	}
