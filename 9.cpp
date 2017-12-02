//Reverse factorial
//Example :: input 24 then output should be 4
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout<<"Enter the value for which you want to find the reverse factorial"<<endl;
	cin>>n;
	int i=1, f=1;

	while(1)
	{
		f *= i;
		if(f == n)
		{
			cout<<"Number "<<n<<" is factorial of "<<i<<endl;
			break;
		}
		else if(f > n)
		{
			cout<<"Invalid input"<<endl;
			break;
		}
		i++;
	}


	return 0;
}

