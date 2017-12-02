//What will be the output?
#include<iostream>
using namespace std;
class A
{
	public:
	virtual void f() 
	{
		cout<<"A";
	}

};
class B: public A{
public:
	void f() { cout<<"B"; }
};

class C: public B{
public:
	void f() { cout<<"C"; }
};

int main()
{
A *p = new C;
p->f();
	return 0;

}
