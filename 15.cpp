//Guess the output.
#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void show() { cout<<" In Base \n";  }

};

class Derived: public Base
{
	public:
		void show() { cout<<"In Derived \n";  }

};

int main(void)
{
	Derived d;
	Base *bp = &d;
	bp->show(); // RUN-TIME POLYMORPHISM
	return 0;

}
