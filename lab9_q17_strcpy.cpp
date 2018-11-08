#include<iostream>
using namespace std;
 void fstrcpy()
{ char a[20],*p,*n,ca[20];
	cout<<"Enter a String "<<endl;
	cin>>a;
	n=a;p=ca;
	while(*n!='\0')
	{	*p=*n;
		 p++;
		 n++;
		 if (*n=='\0')
		 *p='\0';
	}
	cout<<"printing copied string."<<endl; 
	p=ca;
	while(*p!='\0')
	{cout<<*p;
	p++;}
}
int main()
{ 
	fstrcpy();
	cout<<endl;
	return 0;
}