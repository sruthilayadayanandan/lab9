//including the libraries
#include<iostream>
using namespace std;
//main function
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	cout<<" Printing of the array elements using normal index method."<<endl;
	for(int i=0;i<10;)
	{cout<<" "<<arr[i];
	i++;}
	cout<<endl;
	
	cout<<" Printing of the array elements using pointer method."<<endl;
	p=arr;
	for(int i=0;i<10;i++)
	{	cout<<" "<<*p;
		p++;
		}cout<<endl;
	return 0;
}	