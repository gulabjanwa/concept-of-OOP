#include<iostream>
using namespace std;
class employee 
{
	public:
		string name;
		int id;
		int salary;
		int choice;
		
		void fun()
		{
			cout<<"\n enter the name of employee: ";
			cin>>name;
			cout<<"\n enter the employee id:  ";
			cin>>id;
		
		}
		void performance()
		{
			cout<<"\n press 1 for best employee";
			cout<<"\n press 2 for midium  employee";
			cout<<"\n press 3 for weak employee";
		
			  cout<<"\n enter your choice: ";
			  cin>>choice;
		  if(choice==1)
		  {
		  	cout<<"\n salary is 20000 "<<name;
		  }
		  else if(choice==2)
		  {
		  	cout<<"\n salary is 15000";
		  }
		  else if(choice==3)
		  {
		  	cout<<"\n salary is 5000";
		  }
		  else
		  {
		  	cout<<"\n enter valid choice";
		  	
		  }	
		
		}
};
main()
{
	employee e;
	e.fun();
	e.performance();
}