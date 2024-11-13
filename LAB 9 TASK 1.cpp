#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,3,5,6,7};
	int sum=0;
	//cout<<"elements of the array are:"<<endl;
	for(int i=0; i<5; i++)
{
	cout<<arr[i]<<" "<<endl;
	sum+=arr[i];
}
	cout<<"sum is:"<<sum<<endl;
	return 0;
}