#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<iostream.h>
void main()
{
 char a[50];
 clrscr();
 cout<<"\nEnter a string :";
 cin>>a;
 for(int i=0;a[i];i++)
  {
  a[i]=tolower(a[i]);
  }
  cout<<"\nString in lowercase :"<<a;
    getch();

 }