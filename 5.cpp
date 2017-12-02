//What will be the output?
#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"We declare variables, not war."<<endl;
	}
	A(int a=1)
	{
		cout<<"A"<<endl;
	}
	void print()
	{
		cout<<"Ame LehriLala..."<<endl;
	}

};
int main()
{
A a();
a.print();
	return 0;

}
