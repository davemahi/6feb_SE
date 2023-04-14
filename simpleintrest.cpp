#include <iostream>
using namespace std;
class simpleintrest
 {
	float *ptr;

public:
	// Default constructor
	simpleintrest()
	{
		// Dynamically initializing ptr
		// using new
		ptr= new ;
		*ptr = 2.5;
	}

	// Function to display the value
	// of ptr
	void display()
	{
		cout << *ptr << endl;
	}
};
int main()
{
        simpleintrest obj1;

	// Function Call
	obj1.display();

	return 0;
}

