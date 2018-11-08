//including library
#include<iostream>
using namespace std;

//using main function
int main()
{
	int i,*i1; char c,*c1; float f,*f1; double d,*d1; bool b,*b1;
	i=1;c='c';f=3.1415;d=3.141592;b=0;
	i1=&i;
	c1=&c;
	f1=&f;
	d1=&d;
	b1=&b;
	
	cout<<"Sizes of character variable and pointer are "<<sizeof(c)<<"  and "<<sizeof(c1)<<" respectively."<< endl;
	cout<<"Sizes of integer variable and pointer are "<<sizeof(i)<<" and "<<sizeof(i1)<<" repectively."<< endl;
	cout<<"Sizes of floating point variable and pointer are "<<sizeof(f)<<" and "<<sizeof(f1)<<" respectively."<< endl;
	cout<<"Sizes of double variable and pointer are "<<sizeof(d)<<" and "<<sizeof(d1)<<" respectively."<< endl;
	cout<<"Sizes of bool variable and pointer are "<<sizeof(b)<<" and "<<sizeof(b1)<<" respectively."<< endl;
	
	return 0;
}
