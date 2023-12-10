#include<iostream>
using namespace std;
class triangle
{
	public:
		int a,b,c;
		
		void fun()
		{
			cout<<"\n enter the length a :";
			cin>>a;
			cout<<"\n enter the length b:";
			cin>>b;
			cout<<"\n enter the length c:";
			cin>>c;
			
			if(a==b && b==c)
			{
				cout<<"\n the triangle is equilateral triangle ";
			}
			else if(a==b && b!= c)
			{
				cout<<"\n the triangle is isosceles triangle ";
			}
			else if(a!=b!=c)
			{
				cout<<"\n the triangle is scalene triangle";
			}
			else
			{
			}	
			
			
		}
};
main()
{
	triangle t;
	t.fun();
}