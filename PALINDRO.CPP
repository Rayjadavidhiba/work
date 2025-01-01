//palindrom number
#include<iostream.h>
#include<conio.h>
void main()
{
   int n,num,digit,rev=0;
   clrscr();
   cout<<"enter value:";
   cin>>num;
   n=num;
   while(num!=0)
   {
     digit=num%10;
     rev=(rev*10)+digit;
     num=num/10;
     }
     if(n==rev)
     {
     cout<<"the number is palindrom number";
     }
     else
     {
     cout<<"the number is not palindrom number";
     }
}
