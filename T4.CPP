#include<iostream.h>
#include<conio.h>
void main()
{
 int a[10];
 int s=0;
 clrscr();
 for(int i=0;i<10;i++)
 {
  cout<<"Enter a number:";
  cin>>a[i];
  s+=a[i];
 }
 cout<<"Sum ="<<s;
 getch();
}
