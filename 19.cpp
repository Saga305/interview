/* Implement the array shifting logic. */


#include<iostream>
#include<string.h>

using namespace std;
class Array {
	char a[50];
	public:
	Array() { memset(a, 0, 50);
	}

	void set(char *s)
	{
		strncpy(a,s,50);
	}
	
	char * get()
	{
		return a;
	}

	void operator<<(int shift) {
		if(!shift)
			return;
		shift= shift % (strlen(a));
		std::cout<<" shift = "<<shift<<std::endl;
		while(shift)
		{
			char last = a[strlen(a) -1];
			for(int i = strlen(a) -1 ; i > 0 ; i--)
			{
				a[i] = a[i-1];
			}
			a[0] = last;
			shift--;
		}
	}
};


int main()
{
	Array a;
	for(int i = 1; i <10; i ++)
	{
		a.set((char*)"Saga");
		a<<i;
		std::cout<<" String = "<<" << "<<i<<" "<<a.get()<<std::endl;
	}


}
