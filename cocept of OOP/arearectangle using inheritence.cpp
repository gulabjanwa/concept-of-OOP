#include<iostream>
using namespace std;
class rectangle
{
	public:
		int length;
		int breath;
		int area;
};
class Area : public rectangle
{
	public:
		void inputdata()
		{
			cout<<"\n Enter the length of rectangle :";
			cin>>length;
			cout<<"\n Enter the breath of rectangle :";
			cin>>breath;
			
			area=length*breath;
			
			cout<<"\n The area of rectangle is :"<<area;
			
		}
};
main()
{
	Area obj;
	obj.inputdata();
}