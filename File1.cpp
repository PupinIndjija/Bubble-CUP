#include<iostream>
#include<conio.h>
using namespace std;
main()
{
  int a,n=0,c[100],i;

  for(i=0;;i++)
  {
	cin>>a;
	if (a!=42)
	{c[i]=a;
	n++; }
	else break;
  }
  for(i=0;i<n;i++)
  cout<<c[i]<<endl;;

  getch();
}
