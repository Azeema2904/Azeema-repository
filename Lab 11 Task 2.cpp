#include<iostream>
using namespace std;
struct Book
{
	char title[20];
	char author[20];
	int year;
	int numPages;
};
int main()
{
	Book s1[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter information for book"<<i+1<<endl;
		cout<<"Title:"<<endl;
		cin.getline(s1[i].title,20);
		cout<<"Author:"<<endl;
		cin.getline(s1[i].author,20);
		cout<<"Year of publication:"<<endl;
		cin>>s1[i].year;
		cout<<"Number of pages:"<<endl;
		cin>>s1[i].numPages;
		cin.ignore();		
	}
	cout<<"\nBook Information:\n";
	for(int i=0; i<5; i++)
	{
		cout<<"Book:"<<i+1<<endl;
		cout<<"Title:"<<s1[i].title<<endl;
		cout<<"Author:"<<s1[i].author<<endl;
		cout<<"Year of publication"<<s1[i].year<<endl;
		cout<<"Number of pages"<<s1[i].numPages<<endl;
	}
	return 0;
}