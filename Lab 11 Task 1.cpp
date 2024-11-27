#include<iostream>
using namespace std;
struct Student
{
	char name[20];
	int rollNumber;
	int age;
	float marksSubject1;
	float marksSubject2;	
};
int main()
{
	Student s1[5];
	for (int i=0; i<5; i++)
	{
		cout<<"\nEnter details for student "<<i+1<<":\n";
		cout<<"Enter Student name:"<<endl;
		cin.getline(s1[i].name,20);
		cout<<"Enter roll number:"<<endl;
		cin>>s1[i].age;
		cout<<"Enter age:"<<endl;
		cin>>s1[i].age;
		cout<<"Enter marks for subject 1:"<<endl;;
		cin>>s1[i].marksSubject1;
		cout<<"Enter marks for subject 2:"<<endl;
		cin>>s1[i].marksSubject2;
		//clear the input buffer;
		cin.ignore();
		}
		for(int i=0; i<5; i++)
		{
			cout<<"\nStudent Information\n:";
			cout<<"Name:"<<s1[i].name<<endl;
			cout<<"Roll Number"<<s1[i].rollNumber<<endl;
			cout<<"Marks for subject 1:"<<s1[i].marksSubject1<<endl;
			cout<<"Marks for subject 2:"<<s1[i].marksSubject2<<endl;
		}
		return 0;
	}
