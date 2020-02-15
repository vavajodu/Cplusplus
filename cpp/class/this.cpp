#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	void setdata(int ,int);
	void print(void);
};
void A::setdata(int a,int b)
{
	cout<<"Setting data"<<endl;
	x=a,y=b;
}
void A::print(void)
{
	cout<<"this="<<this<<endl;
//	cout<<"x="<<x<<endl;
//	cout<<"y="<<y<<endl;
	cout<<"this->x="<<this->x<<endl;
	cout<<"this->y="<<this->y<<endl;
	cout<<"(*this).x="<<(*this).x<<endl;
	cout<<"(*this).y="<<(*this).y<<endl;
}
int main()
{
	A obj1;
	cout<<"&obj="<<&obj1<<endl;
	obj1.setdata(10,20);
	obj1.print();
}
