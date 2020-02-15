#include<iostream>
using namespace std;
class A{
	private:
	int x,y;
	public:
	void fun(void)
	{
		cout<<x<<y<<endl;
		x=15,y=25;
		cout<<"In fun function"<<endl;
		cout<<x<<" "<<y<<endl;
	}
	int a,b;
	};
int main()
{
	A obj;
	cout<<"In the main function"<<endl;
	obj.fun();
	cout<<result;
}
	
