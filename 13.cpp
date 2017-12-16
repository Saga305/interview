//Pattern
#include<iostream>
using namespace std;
int main()
{
	char ch = 'A';
	int n = 5;
	for(int i = 0; i <= n; i++)
	{
		for(int j= 0; j <= n*2; j++)
		{
			if(j < n)
			{
				if ( j <= n-i )
				{
					std::cout<<ch;
				}
				else
				{
					std::cout<<" ";
				}
				ch++;
			}
			else
			{
				if ( j >= n+i )
				{
					std::cout<<ch;
				}
				else
				{
					std::cout<<' ';
				}
				ch--;
			}
		}
		ch = 'A';
		std::cout<<endl;
	}
}
