#include<iostream.h>
#include<conio.h>
void swap(int a,int b)
{
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"\nSwapped Numbers :"<<a<<"\t"<<b;
}
void main()
{
 int x,y;
 clrscr();
 cout<<"\nEnter two numbers :";
 cin>>x>>y;
 swap(x,y);
 getch():
}

