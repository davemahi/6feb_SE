#include<iostream>
using namespace std;
class lecturer
{
	int lecturers ;//Parameterized Constructor
	string course ,subject ,lecturer ;//Parameterized Constructor
	public:
	void input()
	{
		cout<<"Name of the lecturer";
		cin>>lecturer;
		cout<<"Name of the subject ";
		cin>>subject;
		cout<<"Name of course";
		cin>>course;
		cout<<"Number of lecturers";
		cin>>lecturers;
	}
	void display()
	{
		cout<<"lecturer"<<lecturer;// calling member functions
		cout<<"subject"<<subject;// calling member functions
		cout<<"course"<<course;// calling member functions
		cout<<"lecturers"<<lecturers;// calling member functions
	}		
};
main()
{
	lecturer l1[5];
	for(int i=0;i<3;i++)// statement
	{
		l1[i].input();
	}
	for (int i=0;i<3;i++)// statement
	{
		l1[i].display();
	}	
}
