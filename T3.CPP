#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int y;
 cout<<"Enter a Year :";
 cin>>y;
 if(y%4==0)
	  cout<<"The Given Year is a Leap Year";
 else if(y%400==0)
	  cout<<"The Given Year is a Leap Year";
 else cout<<"The Given Year is Not a Leap Year";
 getch();
 }
