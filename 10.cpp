//find factorial of three digit number E.g 200.
/*
loomb@LoombLeva:~/gitHub/interview$ ./a.out 
Enter the Number::200
788657867364790503552363213932185062295135977687173263294742533244359449963403342920304284011984623904177212138919638830257642790242637105061926624952829931113462857270763317237396988943922445621451664240254033291864131227428294853277524242407573903240321257405579568660226031904170324062351700858796178922222789623703897374720000000000000000000000000000000000000000000000000
*/

#include<iostream>
#include<vector>

void multiply(int x, std::vector<int> &v)
{
	int carry = 0; 

	for (int i=0; i<v.size(); i++)
	{
		int mul = v[i] * x + carry;
		v[i] = mul % 10;
		carry = mul/10;
	}

	while (carry)
	{
		v.push_back(carry%10);
		carry = carry/10;
	}
}

void facto(int n)
{
	std::vector<int> v;
	v.push_back (1);

	for (int x=2; x<=n; x++)
		multiply(x, v);

	for (int i=v.size()-1; i>=0; i--)
		std::cout << v[i];
		std::cout<<std::endl;
}

int main()
{
	std::cout << "Enter the Number::";
	int n;
	std::cin>>n;
	facto(n);
	return 0;
}

