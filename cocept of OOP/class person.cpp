#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		string name;
		string country;
		
		void inputdata()
		{
			cout<<"enter your name :";
			cin>>name;
			cout<<"enter your age :";
			cin>>age;
			cout<<"enter your country name :";
			cin>>country;
			
		}
		void displaydata()
		{
			cout<<"\n your name is :"<<name;
			cout<<"\n your age is :"<<age;
			cout<<"\n your country name is :"<<country;
			
		}
};
main()
{
	person p;
	p.inputdata();
	p.displaydata();
}

