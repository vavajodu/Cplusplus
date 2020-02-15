#include<iostream>
using namespace std;
class A
{
	public:
	int x;
	class B
	{
		public:
		int y;
	};
};
int main()
{
	A a;
	A::B b;
	cout<<"sizeof a is ="<<sizeof a<<endl;
	a.x=10;
	b.y=20;
	cout<<"a.x="<<a.x<<endl;
	cout<<"b.y="<<b.y<<endl;
	cout<<"sizeof a is ="<<sizeof a<<endl;
}
