#include<iostream>
using namespace std;
		void fun(const int &i)
		{
			cout << "fun const funct" <<endl;
		}
		void fun(int &i)
		{
			cout << "fun funct" <<endl;
		}
int main()
{
	const int x=10;
	fun(x);
}
