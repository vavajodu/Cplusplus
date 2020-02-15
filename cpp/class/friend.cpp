#include<iostream>
using namespace std;
class husband
{
	int sallary;
	public:
	friend void setdata(husband &);
	friend void print(husband &);
};
void print(husband &H1)
{
	cout<<"sallary="<<H1.sallary<<endl;
}
void setdata(husband &H1)
{
	int a;
	cout<<"Enter your sallary"<<endl;
	cin>>a;
	H1.sallary=a;
}
int main()
{
	husband h1;
	setdata(h1);
	print(h1);
}
