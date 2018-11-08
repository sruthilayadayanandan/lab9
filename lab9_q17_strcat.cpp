#include<iostream>
using namespace std;
void fstrcat()
{
	char a[30],b[15],*n,*p;
	cout<<"Enter the first string "<<endl;
	cin>>a;
	cout<<"Enter the second string "<<endl;
	cin>>b;
	p=b;
	n=a;
	while(*n!='\0')
	n++;
	while(*p!='\0')
	{	 *n=*p;
	     p++;
	     n++;
	     if (*p=='\0')
	     *n='\0';
	     }
	 n=a;
	cout<<endl;
	 cout<<"Resulting string is "<<endl;
	 while(*n!='\0')
	 {cout<<*n;
		 n++;}
	 
}
int main()
{
	fstrcat();
	cout<<endl;
	return 0;
}