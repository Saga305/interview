/* Encryption and Decryption using key.

   Reh@anna:~/gitHub/interview$ ./a.out 
   Please entere string.
   PyarInsaanKoAchchaBanataHai.
   Please enter encryption key.
   DoLove
   Entered string :PyarInsaanKoAchchaBanataHai.
   Entered key :DoLove
   Encrypted string:-?
   7-

   =

   $
   "
   %A
   Decrypted string:PyarInsaanKoAchchaBanataHai. 
*/		       

#include <iostream>
using namespace std;

int main() {
	char s[100]={0};
	char e[50]={0};
	char en[100]={0};
	char dr[100]={0};

	cout<<"Please entere string."<<endl;
	cin>>s;

	cout<<"Please enter encryption key."<<endl;
	cin>>e;

	cout<<"Entered string :"<<s<<endl;

	cout<<"Entered key :"<<e<<endl;


	//Encryption logic
	int i,j;
	for(i =0,j =0; s[i] ; i++,j++)
	{
		if (!e[j])
		{
			j = 0;

		}
		en[i] = s[i]^e[j];
	}
	en[i] = s[i];

	cout << "Encrypted string:" << en <<endl;

	//Decrypt logic
	for(i =0,j = 0; s[i] ; i++,j++)
	{
		if (!e[j])
		{
			j = 0;

		}
		dr[i] = en[i]^e[j];
	}
	dr[i] = en[i];

	cout << "Decrypted string:" << dr <<endl;
	return 0;
}
