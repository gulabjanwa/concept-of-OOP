 #include<iostream>
using namespace std;
class overloading
{
	public:
		void additon(int a, int b)
		{
			cout<<"Additon :"<<a+b<<endl;
			
		}
		void subtraction(float a, float b)
		{
			cout<< "Subtraction :"<<a-b<<endl;
			
		}
		void multiplication(int A, int B)
		{
			cout<<"Multiplication :"<<A*B<<endl;
		}
		void division(float A, float B)
		{
			cout<<"Division :"<<A/B<<endl;
		}
};
main()
{
	 overloading obj;
	 obj.additon(10,20);
	 obj.subtraction(12.21,32.23);
	 obj.multiplication(50,30);
	 obj.division(60.21,50.36);
	
}