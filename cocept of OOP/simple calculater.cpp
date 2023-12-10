#include<iostream>
using namespace std;

class calculater
{
	public:
		float a,b;
		void result()
		{
			cout<<"enter the first  number\n";
			cin>>a;
			cout<<"enter the second number\n:";
			cin>>b;
		}
		float add()
		{
			return a+b;
		}
		float sub()
		{
			return a-b;
		}
		float multi()
		{
			return a*b;
		}
		float div()
		{
			return a/b;
		}
};
main()
{
   int ch;
   calculater c;
   
   
       cout<<"press 1 for addition \n";
    	cout<<"press 2 for substraction\n";
	   cout<<"press 3 for multiplication\n";
	   cout<<"press 4 for division\n";
	   cout<<"press 0 for exit\n";
   do
   {
   	 cout<<"enter your choice :\n";
   	 cin>>ch;
   	  switch(ch)
   	  {
   	  	case 1:
   	  		c.result();
   	  		cout<<"Result :"<<c.add()<<endl;
   	  		break;
   	  	case 2:
   	  		c.result();
   	  		cout<<"Result:"<<c.sub()<<endl;
   	  		break;
   	  	case 3:
			 c.result();
			 cout<<"Result:"<<c.multi()<<endl;
			 break;
		case 4:
		    c.result();
			cout<<"Result:"<<c.div()<<endl;
			break;
				 	
		 }
   }
    while (ch >= 1 && ch <= 4);
   
}