#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//creating a file
	ofstream file("newfile.txt");
	
	//writing a data
	file<<"Hello My Name is Azeema";
	file.close();
	
	string Text;
	//reading a data from the file
	ifstream readfile("newfile.txt");
	while(getline (readfile, Text))
	{
		cout<<Text;
	}
	readfile.close();	
	
    return 0;
		
}