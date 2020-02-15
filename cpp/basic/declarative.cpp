#include<iostream>
using namespace std; 
//using std ::cout;
//using std ::endl;
namespace first
{
	int x=10,y=20;
}
namespace second
{
	int x=15,y=25;
}
main()
{
	using first ::y;
	using second ::x;
	cout<<"x="<<x<<"y="<<y<<endl;
}
