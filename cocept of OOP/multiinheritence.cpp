#include<iostream>
using namespace std;
class person
{
	public:
		string name;
		int age;
		
		void input()
		{
			cout<<"\n Enter the name :";
			cin>>name;
			cout<<"\n enter the age :";
			cin>>age;
			 
			}
			void display()
			{
					
			cout<<"\n Name is :"<<name;
			cout<<"\n Age is  :"<<age;
		}
};
class Percentage
{
	public:
	float percentage;
	void per()
	{
		cout<<"\n enter your percentage :";
		cin>>percentage;
	}
	void displayper()
	{
		cout<<"\n Your percentage is :"<<percentage;
	}
};
class teacher : public person,public Percentage
{
	public:
	int salary;
	void sal()
	{
		cout<<"\n Enter the salary of teacher :";
		cin>>salary;
	}
	void displaysal()
	{
		cout<<"\n The salary of teacher is :"<<salary;
		
	}
};
main()
{
	teacher obj;
	obj.input();
	obj.per();
	obj.sal();
	obj.display();
	obj.displayper();
	obj.displaysal();
	 
}