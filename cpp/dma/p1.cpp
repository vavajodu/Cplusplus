//2d array multiplication
#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter the rows and column"<<endl;
	cin>>r>>c;
//////////////////////   ENTERING FIRST ARRAY   ////////////////////////////	
	int **arr=new int *[r];
	for(i=0;i<r;i++)
		arr[i]=new int [c];
	cout<<"Enter the array elements"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
/////////////////// ENTERING ANOTHER ARRAY ////////////////////////////
	int **arr1=new int *[r];
	for(i=0;i<r;i++)
		arr1[i]=new int [c];
	cout<<"Enter another array"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr1[i][j];
		}
	}
/////////////////// PERFORMING MULTIPLICATION /////////////////////////////////
	int **res=new int *[r];
	for(i=0;i<r;i++)
		res[i]=new int [c];
	cout<<"Resultant array is: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			res[i][j]=arr[i][j]*arr1[i][j];
		}
	}
/////////////////// PRINTTING RESULTANT ARRAY //////////////////////	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<res[i][j]<<"\t";
		}
		cout<<endl;
	}
}
	
