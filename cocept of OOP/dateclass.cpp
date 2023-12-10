#include<iostream>
using namespace std;
class date
{
	public:
		string day;
		string month;
		int year;
		
		void set()
		{
			cout<<"\n enter the Day :";
			cin>>day;
			cout<<"\n Enter the Month :";
			cin>>month;
			cout<<"\n Enter the year :";
			cin>>year;
		}
		void get()
		{
			cout<<"\n Day :"<<day;
			cout<<"\n Month :"<<month;
			cout<<"\n Year :"<<year;
		}
};
main()
{
	date d;
	d.set();
	d.get();
}