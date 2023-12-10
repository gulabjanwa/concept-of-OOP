#include<iostream>
using namespace std;
class Biodata
{

	public:
		string name;
		string fathername;
	    void biodata()
        {
			cout<<"\n Enter your name :";
			cin>>name;
			cout<<"\n enter your fathername :";
			cin>>fathername;
	
         }
         void displaybiodata()
         {
         	cout<<"\n Your name is :"<<name;
         	cout<<"\n Your fathername is :"<<fathername;
		 }
};
class marksheet
{
	public:
	    int rollnumber;
	     
		void getdata()
		{
			cout<<"\n Enter your rollnumber :";
			cin>>rollnumber;
			 
		}
		void displaydata()
		{
			cout<<"\n your rollnumber is :"<<rollnumber;
		
		}
};
class subject : public Biodata , public marksheet
{
	public:
		int a,b,c,d;
		int total;
	void marks()
	{
	  cout<<"\n enter  English marks :";
	  cin>>a;
	  cout<<"\n enter Science marks :";
	  cin>>b;
	  cout<<"\n enter Maths marks :";
	  cin>>c;
	  cout<<"\n enter Hindi marks:";
	  cin>>d;
		
	}
	void displaymarks()
	{
		total=(a+b+c+d);
		cout<<"\n In English :"<<a;
		cout<<"\n In hindi :"<<b;
		cout<<"\n In maths :"<<c;
		cout<<"\n In science :"<<d;
		cout<<"\n Total marks is :"<<total;
	}
	
};
main()
{
	subject obj;
	 obj.biodata();
	 obj.getdata();
	 obj.marks();
	 obj.displaybiodata();
	 obj.displaydata();
	 obj.displaymarks();
}
