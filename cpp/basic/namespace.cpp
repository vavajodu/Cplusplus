#include<iostream>
using namespace std;
namespace first
{
	int x=10,y=20;
}
namespace second{
	int x=15,y=25;
}
main()
{
	{
	using namespace first;
	cout<<"x="<<x<<"y="<<y<<endl;
	}
	{
	using namespace second;
	cout<<"x="<<x<<"y="<<y<<endl;
	}
}


