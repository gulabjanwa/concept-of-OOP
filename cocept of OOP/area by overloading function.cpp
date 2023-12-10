#include<iostream>
using namespace std;
class overloading
{
	public:
		void arearectangle(int area, int breath)
		{
			cout<<" Area of rectangle is :"<<area*breath<<endl;	
		}
		void areatriangle(float base, float height)
		{
			cout<<"Area of triangle is :"<<0.5*base*height<<endl;
		}
		void areacircle(int r)
		{
			cout<<"Area of circle is :"<<3.141*r*r<<endl;
		}
		
		
};
main()
{
	overloading obj;
	obj.arearectangle(20,30);
	obj.areatriangle(10,20);
	obj.areacircle(10);
}