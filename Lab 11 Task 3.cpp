#include<iostream>
using namespace std;
struct User
{
	string Name;
};
bool login(const string&username, const string&password)
{
	if(username== "user" && password== "password123")
	{
	return true;
	}
	return false;
}
int main()
{
	User activeUser;
	string username, password;
	cout<<"Enter your username:"<<endl;
	cin>>username;
	cout<<"Enter your password:"<<endl;
	cin>>password;
	if(login(username, password))
	{
		cout<<"Welcome:"<<username<<endl;
	}
	else
	{
		cout<<"Invalid User details. Please try again:"<<endl;
	}
	return 0;
}

