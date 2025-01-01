
#include<iostream.h>
#include<conio.h>
int main()
{
	int n,t1=0,t2=1,t=0;
        clrscr();
        cout<<"enter the number of terms:";
        cin>>n;
        cout<<"the series is :";
        for(int i=1; i<=n; i++)
        if(i==1)
        {
        	cout<<t1<<",";
         }
         else if(i==2)
         {
         	cout<<t2<<",";
                t=t1+t2;
                t1=t2;
                t2=t;
                cout<<t<<",";
          }
return 0;
}