u#include<conio.h>
#include<iostream.h>
void main()
{
 int a[50],i,n,j;
 clrscr();
 cout<<"\nEnter the number of Elements :";
 cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"\nEnter the array elements :";
 cin>>a[i];
 }
 cout<<"\n  Unsorted Array"<<"\n  ______________\n\n";
 for(i=0;i<n;i++)
 {
 cout<<a[i]<<"\t";
 }
 for(i=0;i<n;i++)
  {
  for(j=i+1;j<n;j++)
    {
    if(a[i]>a[j])
      {
      a[i]=a[i]+a[j];
      a[j]=a[i]-a[j];
      a[i]=a[i]-a[j];
      }
     }
   }
   cout<<"\n  Sorted Array"<<"\n  ____________\n\n";
for(i=0;i<n;i++)
 {
 cout<<a[i]<<"\t";
 }
 getch();
}