#include<iostream>
using namespace std;
class value
{
	public:
		
	int a,multi,cubic;
 	inline void fun()
	{
	
	cout<<"enter the value of a :";
	cin>>a;
	
	multi=a*a;
	cubic=a*a*a;
	cout<<"\n the multiplication value of A is :"<<multi;
	cout<<"\n the cubic value of A is :"<<cubic;
    }
    

};
main()
{
	value v;
	v.fun();
}