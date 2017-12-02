//What will be the output?
#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
	cout<<'a';
	}
	virtual ~A()
	{
	cout<<'c';
	}


};
class B{
public:
	A a;
	B()
	{
	cout<<'b';
	}
	~B()
	{
	cout<<'d';
	}
};


int main()
{
	B b;
	return 0;

}
