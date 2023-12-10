#include<iostream>
using namespace std;
class circle
{
	private:
		int radius;
		public:
			
		void inputdata(int r)
		{
			radius=r;
			float area,circumfrence;
			area=3.141*r*r;
			circumfrence=2*3.141*r;
			
			cout<<"The area of circle is:"<<area<<endl;
			cout<<"the circumfrence of circle is :"<<circumfrence<<endl;
			
		}
};
main()
{
	circle c;
	c.inputdata(15);
}
		