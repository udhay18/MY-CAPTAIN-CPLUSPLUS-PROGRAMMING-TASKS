#include<iostream.h>
#include<conio.h>
class yr
{
 int days,weeks,year;
 public:
  void getdata()
  {
  cout<<"Enter the number of days :";
  cin>>days;
  }
  void display()
  {
  cout<<"\nYears :"<<year<<"\nWeeks :"<<weeks<<"\nDays :"<<days;
  }
  void convert()
   {
    year=days/365;
    days%=365;
    weeks=days/7;
    days%=7;
    }
  }n;
void main()
 {
 clrscr();
 n.getdata();
 n.convert();
 n.display();
 getch();
}