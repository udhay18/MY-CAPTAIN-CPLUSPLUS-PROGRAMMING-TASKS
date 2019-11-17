#include<conio.h>
#include<iostream.h>
void main()
{
 int a[50],i,n,l,s;
 clrscr();
 cout<<"\nEnter the number of Elements";
 cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"\nEnter the array elements :";
 cin>>a[i];
 }
 l=s=a[0];
 for(i=1;i<n;i++)
 {
 if(a[i]>l)
 l=a[i];

 if(a[i]<s)
 s=a[i];
 }

 cout<<"\nThe Smallest Element Is :"<<s;
 cout<<"\nThe Largest Element Is :"<<l;
 getch();
}
