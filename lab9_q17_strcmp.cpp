#include<iostream>
using namespace std;
int fstrlen(char a[])
{ 
	char *p;
	int i=0;
	p=a;
	while(*p!='\0')
	{i++;p++;}
	return i;
}
int fstrcmp()
{
	char a[30],b[15];
	cout<<"Enter the first string "<<endl;
	cin>>a;
	cout<<"Enter the second string "<<endl;
	cin>>b;
	if (fstrlen(a)==fstrlen(b))
	{   char *n,*p;
		n=a;p=b;
		while(*n!='\0')
		{
			if (*n!=*p)
			{return 0;}
			n++;p++;
		}
		return 1;
	}	
	else 
	return 0;			
}
int main()
{
	int k;
	k=fstrcmp();
	if (k==1)
	cout<<"Both the strings are equal"<<endl;
	else 
	cout<<"Unequal strings"<<endl;
	cout<<endl;
	return 0;
}