//including the library 
#include<iostream>
using namespace std;

//using main function
int main()
{
	char a[20],*p,*n;
	cout<<" Enter a String "<<endl;
	cin>>a;
	n=a;
	while(*n!='\0')
	{	
		p=n;
		while(*p!='\0')
		{cout<<" "<<*p;
		p++;}
		cout<<endl;
		n++;
	}	
	return 0;
}