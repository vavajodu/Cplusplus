#include<iostream>
using namespace std;
int add(int x,int y)
{
	return(x+y);
}
int add(float x,int y)
{
	return(x+y);
}
float add(int x,float y)
{
	return(x+y);
}
float add(float x,float y)
{
	return(x+y);
}
main()
{
	int a=2,y=5;
	float f1=4.5,f2=6.5;
	cout<<"add1="<<add(a,y)<<endl;
	cout<<"add2="<<add(f1,a)<<endl;
	cout<<"add3="<<add(y,f2)<<endl;
	cout<<"add4="<<add(f1,f2)<<endl;
}
