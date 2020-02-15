#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the value of row and col."<<endl;
	cin>>r>>c;
	int **p=new int* [r];
	for(i=0;i<r;i++)
		p[i]=new int[c];
	cout<<"Enter the elements"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>p[i][j];
		}
	}
	cout<<"Entered array is:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}	
		
}
