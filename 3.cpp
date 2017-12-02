//What is the output of the program?
//uncomment couts for better understanding
#include<iostream>
using namespace std;

int main()
{
int *t[2] = { new int[2], new int[2] };

//cout<<"i%2"<<"\t"<<"i/2"<<"\t"<<"i"<<endl;
for (int i = 0; i <4; i++)
{
//cout<<i%2<<"\t"<<i/2<<"\t"<<i<<endl;
t[i%2][i/2]=i;
}
cout<<t[0][1]+t[1][0]<<endl;
delete [] t[0];
delete [] t[1];


}
