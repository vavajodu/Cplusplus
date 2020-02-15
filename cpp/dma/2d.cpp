#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the value of row and column"<<endl;
	cin>>r>>c;
	int **p= new int *[r];
	for(i=0;i<r;i++)
		p[i]=new int[c];
	cout<<"Enter the array1:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>p[i][j];
		}
	}
	cout<<"Enter the array2:"<<endl;
	int **q=new int *[r];
	for(i=0;i<r;i++)
		q[i]=new int[c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>q[i][j];
		}
	}
	int **res=new int *[r];
	for(i=0;i<r;i++)
		res[i]=new int[c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j]=p[i][j]*q[i][j];
		}
	}
	cout<<"Resultant array is:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}

}
