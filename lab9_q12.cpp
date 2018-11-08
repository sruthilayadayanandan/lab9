//including the library
#include<iostream>
using namespace std;

//using main function
int main()
{
	int a,b,*p;
	//pointer pointing towards a
	p=&a;
   	b=*p;
	   	
	a=2;
	b=3;
	
	cout<<" a = "<<a<<" and b = "<<b;
 	cout<<" p = "<<*p<<endl;
	
	//pointer pointing towards b
	p=&b;
	cout<<" a = "<<a<<" and b = "<<b;
 	cout<<" p = "<<*p<<endl;

	return 0;
}