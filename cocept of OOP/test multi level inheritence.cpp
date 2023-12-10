#include<iostream>
using namespace std;
class student 
{
	public:
		int rollnumber;
		void getdata()
		{
			cout<<"\n enter the rollnumber :";
			cin>>rollnumber;
			
		}
		void setdata()
		{
			cout<<"\n Your rollnumber :"<<rollnumber;
		}
};
class test
{
	public:
		int a;
		int b;
		void storemarks()
		{
			cout<<"\n Enter the first subject marks :";
			cin>>a;
			cout<<"\n Enter the second subject marks :";
			cin>>b;
		}
};
class result : public student , public test
{
	public:
		int total;
		void displaytotal()
		{
	     	total=(a+b);
			cout<<"\n The total marks of two subject is :"<<total;
			
		}
};
main()
{
	result obj;
	obj.getdata();
	obj.storemarks();
	obj.setdata();
	obj.displaytotal();
	
}