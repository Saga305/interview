/* Meta strings 
Examples:	Saga and gaSa are emta strings.
		Saga and agaS are not meta strings.
 */

#include<iostream>
#include<string>

using namespace std;
int main() 
{
	string s1("Saga");
	string s2("gaSa");

	if(s1.size() != s2.size())
	{
		std::cout<<" s1 and s2 are not meta strings."<<std::endl;
	}
	else
	{
		char check[4] ={0};
		int count = 0;
		int j = 0;
		for(int i = 0; i < s1.size(); i++)
		{
			if(s1[i] != s2[i])
			{
				check[j++] = s1[i];
				check[j++] = s2[i];
				count++;
			}

			if (count > 2)
			{ 
				std::cout<<" s1 and s2 are not meta strings."<<std::endl;
				break;
			}
		}
		if((count == 2) && (check[0] == check[3]) && (check[1] == check[2]))		
		{

				std::cout<<" s1 and s2 are meta strings."<<std::endl;
		}
	}
}
