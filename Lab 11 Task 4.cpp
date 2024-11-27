#include<iostream>
using namespace std;
struct StudentGrading
{
	char Name[20];
	int SapId;
	char Address[30];
	char Department[20];
	float marksSubject1;
	float marksSubject2;
	
	float calculateMaxMarks()
	{
		return(marksSubject1 > marksSubject2) ? marksSubject1 : marksSubject2;
	}
    void displayStudent()
    {
    	cout<<"Name:"<<Name<<endl;
    	cout<<"SapId:"<<SapId<<endl;
    	cout<<"Address:"<<Address<<endl;
    	cout<<"Department:"<<Department<<endl;
    	cout<<"Marks in Subject 1:"<<marksSubject1<<endl;
    	cout<<"Marks in Subject 2:"<<marksSubject2<<endl;
    	cout<<"Maximum Marks:"<<calculateMaxMarks()<<endl;
	}
};
int main()
{
	const int numStudents=5;
	StudentGrading students[numStudents];
	for(int i=0; i<numStudents; i++)
	{
		cout<<"Enter details for student:"<<i+1<<endl;
		cout<<"Enter Name:";
		cin.getline(students[i].Name,20);
		cout<<"Enter SapId:";
		cin>>students[i].SapId;
		cin.ignore();
		cout<<"Enter Address:";
		cin.getline(students[i].Address,30);
		cout<<"Enter Department:";
		cin.getline(students[i].Department,20);
		cin.ignore();
		cout<<"Enter Marks for Subject 1:";
		cin>>students[i].marksSubject1;
		cout<<"Enter Marks for Subject 2:";
		cin>>students[i].marksSubject2;
		cin.ignore();		
	}
	for(int i=0; i<numStudents; i++)
	{
		cout<<"Student Information:"<<i+1<<endl;
		students[i].displayStudent();
	}
	return 0;
}