#include<iostream>
using namespace std;
int main()
{
	int x=10;
	cout<<"value of x="<<x<<endl;
	cout<<"Address of x="<<&x<<endl;
	int &r=x;	//giving alias name
	cout<<"value of r="<<r<<endl;
	cout<<"Address of r="<<&r<<endl;
	int &q=r;
	cout<<"value of q="<<q<<endl;
	cout<<"Address of q="<<&q<<endl;
	int y=100;
	q=y;
	cout<<"value of q="<<q<<endl;
	cout<<"Address of q="<<&q<<endl;
	cout<<"value of x="<<x<<endl;
	x=33;
	cout<<"value of y="<<y<<endl;
		
}
