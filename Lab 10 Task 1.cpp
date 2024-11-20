#include<iostream>
using namespace std;
void passByValue(int num1)
{
	num1= num1-10;
	cout<<"Inside Function (Pass By Value):"<<num1<<endl;
}
void multiply(int num2)
{
	num2=num2*10;
	cout<<"Inside Function (multiply): "<<num2<<endl;
}

int main()
{
	int number=5;
	cout<<"Before Function Call:"<<number<<endl;
	passByValue(number);
	cout<<"After Function Call:"<<number<<endl;
	cout<<"Before Function Call:"<<number<<endl;
	multiply(number);
	cout<<"After Function Call:"<<number<<endl;
	return 0;
}
