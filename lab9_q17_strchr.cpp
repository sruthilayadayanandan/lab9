#include<iostream>
using namespace std;
int fstrchr(char a[],char c)
{
	char *p;int n=0;
	p=a;
	while(*p!='\0')
	{
		if(*p==c)
		n++;
		p++;
	}
	return n;
}
int main()
{
		char a[15],c;
		int k;
		cout<<"Enter your string ";
		cin>>a;
		cout<<endl;
		cout<<"Enter the character you want to search "<<endl;
		cin>>c;
		k=fstrchr(a,c);
		cout<<"no of times "<<c<<" repeats in the string = "<<k;
		return 0;
}