#include<iostream>
using namespace std;
int main()
{
	int rows,columns;
	cout<<"enter the number of rows:";
	cin>>rows;
	cout<<"enter the number of columns:";
	cin>>columns;
	int array[rows][columns];
	cout<<"elements of the array are:/n:";
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
		cout<<"element ["<< i <<"] ["<< j <<"]:";
		cin>>array[i][j];
	}
	}
	
	//display the 2D array
	cout<<"/nthe 2D array is:/n"<<endl;
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<columns; j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	int multiply;
	multiply=multiply*array[rows][columns];
	cout<<"multiply is:"<<multiply<<endl;
	return 0;
	
}