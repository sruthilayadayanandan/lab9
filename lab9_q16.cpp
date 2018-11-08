#include<iostream>
using namespace std;
int main()
{
	char a[20],*p,*n,i=0;
	cout<<"Enter a String "<<endl;
	cin>>a;
	while(a[i]!='\0')
	i++;
	n=&a[i-1];
	while(*n!=a[0])
	{	
		p=n;
		while(*p!='\0')
		{cout<<" "<<*p;
		p++;}
		cout<<endl;
		n--;
	}
	while(*n!='\0')
	{cout<<" "<<*n;
	n++;}
	cout<<endl;
	return 0;
}