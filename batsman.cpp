#include<iostream>
using namespace std;
class cricketer
{
	int runs;
	float average_runs;

	string best;
	public:
	void inputdata()
	{
		cout<<"Enter runs";
		cin>>runs;
		cout<<"Average runs";
		cin>>average_runs;
		cout<<"best performance";
		cin>>best;
	}
	
	void display()
	{
	
	cout<<"Enter runs="<<runs;
	cout<<"Average runs="<<average_runs;
	cout<<"best performance"<<best;
	}
};

main()
{

		cricketer cri1;
		cri1.inputdata();
		cri1.display();
	
}

