#include<iostream>

using namespace std;
class A
{
	public:
		void fun1()
		{
			std::cout<<"A::fun1()"<<std::endl;
		}
		virtual void fun2()
		{
			std::cout<<"A::fun2()"<<std::endl;
		}
		virtual void fun3()
		{
			std::cout<<"A::fun3()"<<std::endl;
		}
		virtual void fun4()
		{
			std::cout<<"A::fun4()"<<std::endl;
		}



};

class B: public A
{
	public:
		void fun1()
		{
			std::cout<<"B::fun1()"<<std::endl;
		}
		void fun2()
		{
			std::cout<<"B::fun2()"<<std::endl;
		}
		void fun4(int x)
		{
			std::cout<<"B::fun()"<<std::endl;
		}


};

void (A::*ptr)(void);
int main()
{
	A *p = new A;
/*
(gdb) p *p
$4 = {_vptr.A = 0x8048a88 <vtable for A+8>}
(gdb) info vtbl p
vtable for 'A' @ 0x8048a88 (subobject @ 0x804b008):
[0]: 0x80488bc <A::fun2()>
[1]: 0x80488e8 <A::fun3()>
[2]: 0x8048914 <A::fun4()>
(gdb) 
*/

	A *pa = new B;
/*
(gdb) p *pa
$5 = {_vptr.A = 0x8048a70 <vtable for B+8>}
(gdb) info vtbl pa
vtable for 'A' @ 0x8048a70 (subobject @ 0x804b018):
[0]: 0x8048940 <B::fun2()>
[1]: 0x80488e8 <A::fun3()>
[2]: 0x8048914 <A::fun4()>
*/

	B *b = new B;
/*
(gdb) p *b
$6 = {<A> = {_vptr.A = 0x8048a70 <vtable for B+8>}, <No data fields>}
(gdb) info vtbl b
vtable for 'B' @ 0x8048a70 (subobject @ 0x804b028):
[0]: 0x8048940 <B::fun2()>
[1]: 0x80488e8 <A::fun3()>
[2]: 0x8048914 <A::fun4()>
*/
	p->fun1();
	p->fun2();
	p->fun3();
	p->fun4();
}
