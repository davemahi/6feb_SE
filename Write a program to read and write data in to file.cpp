#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file1;
	string data;
	file1.open("mahi.txt",ios::app);
	
	
	cout<<"enter data";
	cin>>data;
	
	file1<<data;
	file1.close();

	ifstream file2;
	file2.open("mahi.txt");
	file2>>data;
	cout<<data;
}
