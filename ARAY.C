//find sum of an array values...
#include<stdio.h>
#include<conio.h>
void main()
{
	int  sum, arr[10], i;
	clrscr();

	printf("\nindex is %d and value is %d",arr[i]);
	//assignment of an array
	for(i=0; i < 10; i ++)
	arr[i]=i*i;
	//displaying of an array...
	for(i=0; i < 10; i ++)
	sum=sum+arr[i];

	printf("\nindex is %d and value is %d",i,arr[i],sum);
	printf("\narray address is %X",arr);
	printf("sum of all the values of an array:%d",sum);
	return 0;
}