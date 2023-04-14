#include<iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
	public:
		void setPerson(int a, string n){
			name = n;
			age = a;
		}
		// student details
		void displayPerson()
		{
			cout<<"Name:  "<<name<<endl;
			cout<<"Age:    "<<age<<endl;
		}
		
	
};
class Student: Person
// student detail input
{
	public :
		float percentage;
	public:
		void setStudent(string n, int a, float p){
			percentage = p;
			setPerson(a,n);
		}
		void displayStudent(){
			cout<<"Student details are: \n";
			displayPerson();
			cout<<"Prcentage is:  "<<percentage<<endl;
		}
};
// teacher detail 
class  Teacher: Person
{
	public:
		float salary;
	public:
		void setTeacher(string n, int a, float s){
			salary = s;
			setPerson(a,n);
		}
		// teacher detail input
		void displayTeacher(){
			cout<<"Teachers details are: \n";
			displayPerson();
			cout<<"Salary:  "<<salary<<endl;
		}
};


 main()
 {
 	// student name, age, percentage
	Student s;
	s.setStudent("mahi", 16,80);
	s.displayStudent();
	// teacher name,age,salary 
	Teacher t;
	t.setTeacher("anjali", 22, 9000.98);
	t.displayTeacher();
}
