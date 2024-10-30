#include<iostream>
using namespace std;
int main()
{
	int n;
	long factorial=1.0;
	cout<<"enter a positive integer"<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"error!factorial of a negative number does not exist"<<endl;
	}
	else
	{
		int i=1;
		do
		{
			factorial*=i;
			i++;
		}
		while(i<=n);
		{
			cout<<" factorial of "<<n<<" is ="<<factorial<<endl;
		}
	}
	return 0;
}