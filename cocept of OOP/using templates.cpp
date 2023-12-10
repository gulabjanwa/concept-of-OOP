#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T&b)
{
	T t=a;
	  a=b;
	  b=t;
}
main()
{
	 
	int x=10,y=20;
	 
	 
	cout<<"\nbefore swapping X = "<<x<<"| Y = "<<y;
	swapping(x,y);
	cout<<"\n after swap X = "<<x<<"|  Y = "<<y;
	
	 
}