//What will be the output?
#include<iostream>
using namespace std;
class A
{
	public:
	virtual void print() = 0;

};
class B: public A{};
int main()
{
B ob;
	return 0;

}
