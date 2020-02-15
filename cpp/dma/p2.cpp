#include<iostream>
#include<cstdio>
using namespace std;
class st{
//	int x,y;
	private:
	void fun(void)
	{	
		printf("Hello world\n");
	}
	};
int main()
{
	st A;
	fun();
	cout<<sizeof(A);
}
	
