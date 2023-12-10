#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		int classs;
		int rollnumber;
		int marks;
		
		void set()
		{
			cout<<"\n Enter the name :";
			cin>>name;
			cout<<"\n Enter your class :";
			cin>>classs;
			cout<<"\n Enter your rollnumber :";
			cin>>rollnumber;
			cout<<"\n Enter your marks :";
			cin>>marks;
		}
		void get()
		{
			cout<<"\n your name is :"<<name;
			cout<<"\n Your class is :"<<classs;
			cout<<"\n Your rollnumber is :"<<rollnumber;
			cout<<"\n Your marks is : "<<marks;
			
			if(marks<=100 && marks>=70)
			{
				cout<<"\n Grade A";
			}
			else if(marks<=70 && marks>=50)
			{
				cout<<"\n Grade B";
			}
			else if(marks<=50 && marks>=30)
			{
				cout<<"\n Grade C";
			}
			else if(marks<=30 && marks>=0)
			{
				cout<<"\n Grade D";
			}
			
			
			
		}
};
main()
{
	student s;
	s.set();
	s.get();
}