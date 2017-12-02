//What is the output of this code?
//Answer: Compilation error
#include<iostream>
using namespace std;
class Test
{
	public:
	static void fun();

};

static void Test::fun()    //Here you should not mentioned statick key word for the static linkage.
{
	cout<<"Ame LehriLala...GujaratiLala"<<endl;
}
int main()
{
	Test::fun();
	return 0;

}
