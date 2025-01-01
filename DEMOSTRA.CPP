#include<iostream.h>
#include<conio.h>
class greetings
{
  public:
  char*name;
  void getdata(char*nm)
  {
  name=nm;
  }
  void welcomemesg()
  {
  cout<<"welcome to c++ opp..."<<name;
  }
};
   void main()
   {
   clrscr();
   greetings obj;//*new greetings();
   char*nm="MJKACC";
   obj.getdata(nm);
   obj.welcomemesg();
   getch();
}

