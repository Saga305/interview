//Type of this pointer. Below is the demo code which states the this pointer type is differ for different type of the functions.

/*
Verify Below GDB stack trace(Created for same program) for the details.

Breakpoint 1 at 0x80486a1: file 11.cpp, line 5.
Breakpoint 2 at 0x80486a7: file 11.cpp, line 8.
Breakpoint 3 at 0x80486ad: file 11.cpp, line 11.
Breakpoint 4 at 0x80486b3: file 11.cpp, line 14.
Num     Type           Disp Enb Address    What
1       breakpoint     keep y   0x080486a1 in X::fun1() const at 11.cpp:5
2       breakpoint     keep y   0x080486a7 in X::fun2() volatile at 11.cpp:8
3       breakpoint     keep y   0x080486ad in X::fun3() const volatile at 11.cpp:11
4       breakpoint     keep y   0x080486b3 in X::fun4() at 11.cpp:14
Starting program: /home/loomB/gitHub/interview/a.out 

Breakpoint 1, X::fun1 (this=0xbfffeffb) at 11.cpp:6
type = const class X {
  public:
      void fun1(void) const;
          void fun2(void) volatile;
	      void fun3(void) const volatile;
	          void fun4(void);

} * const
Continuing.

Breakpoint 2, X::fun2 (this=0xbfffeffb) at 11.cpp:9
type = volatile class X {
  public:
      void fun1(void) const;
          void fun2(void) volatile;
	      void fun3(void) const volatile;
	          void fun4(void);

} * const
Continuing.

Breakpoint 3, X::fun3 (this=0xbfffeffb) at 11.cpp:12
type = const volatile class X {
  public:
      void fun1(void) const;
          void fun2(void) volatile;
	      void fun3(void) const volatile;
	          void fun4(void);

} * const
Continuing.

Breakpoint 4, X::fun4 (this=0xbfffeffb) at 11.cpp:15
type = class X {
  public:
      void fun1(void) const;
          void fun2(void) volatile;
	      void fun3(void) const volatile;
	          void fun4(void);

} * const
Continuing.
[Inferior 1 (process 3082) exited normally]

*/



#include<iostream>
class X {
public:
	void fun1() const {
	        // Type of this is const X* 
	}
	void fun2() volatile {
	          // Type of this is volatile X* 
	}
	void fun3() const volatile {
	          // Type of this is const volatile X* 
	}
	void fun4() {
	          // Type of this is const X* 
	}
};

int main()
{
	class X x;
	x.fun1();
	x.fun2();
	x.fun3();
	x.fun4();

}
