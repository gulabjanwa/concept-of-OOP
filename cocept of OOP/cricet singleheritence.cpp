#include<iostream>
using namespace std;
class cricketer
{
	public:
		void team()
		{
			cout<<"\n Team india";
		}
};
class batsman : public cricketer
{
	public:
		int totalrun;
		float averagerun;
		int timesout;
		
		
		void inputdata()
		{
			cout<<"\n Enter Total run :";
			cin>>totalrun;
			cout<<"\n enter how many timeout in match: ";
			cin>>timesout;	
			
		}
		void displaydata()
		{
			cout<<"\n Total run :"<<totalrun;
			
			averagerun=totalrun/timesout;
			cout<<"\n The average of run is :"<<averagerun;
			if(averagerun>100)
			{
				cout<<"\n He is best player ";
			}
			else
			{
				cout<<"\n he is player";
			}
			
			
		}
};
main()
{
	batsman obj;
	obj.team();
	obj.inputdata();
	obj.displaydata();
}