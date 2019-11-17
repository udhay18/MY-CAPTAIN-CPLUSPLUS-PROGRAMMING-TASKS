#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iostream.h>
void main()
{
 char a[20],b[20];
 int i,l1,l2,j,fnd=0,ntfnd=0;
 clrscr();
 cout<<"\nEnter strings  A:";
 gets(a);
 cout<<"\nEnter strings B:";
 gets(b);
 l1=strlen(a);
 l2=strlen(b);
 if(l1==l2)
 {
  for(i=0;i<l1;i++)
    {
	fnd=0;
	for(j=0;j<l1;j++)
	{
	 if(a[i]==b[i])
	 {
	 fnd=1;
	 break;
	}
       }
    if(fnd==0)
      {
	ntfnd=1;

      }
   }
   if(ntfnd==1)
   {
   cout<<a<<" and "<<b<<" are a anagram";
   }
   else
    {
    cout<<a<<" and "<<b<<" are not a anagram";
    }



  getch();
}
}
