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
	cout<<"erroe!factorial of a negative number does not exist"<<endl;
	}
	else
    {
		for(int i=1; i<=n; i++)
		{
			factorial*=i;
		}
		cout<<"factorial of "<<n<<" = "<<factorial<<endl;
		}
		return 0;
	
}