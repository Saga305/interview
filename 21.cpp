#include <iostream>
#include <string>   
#include <sstream>
using namespace std;

//recursive generate '+' '-' 'space' between numbers + inspection
void generate(string & numb, int pos = 0, int sum = 100);

//main
int main()
{
    cout << "All variations: \n";
    string numb = " 1 2 3 4 5 6 7 8 9";
    generate(numb);
    
    cout << "\nReverse variations: \n";
    numb = " 9 8 7 6 5 4 3 2 1";
    generate(numb);
    
    return 0;
}



//recursive generate '+' '-' 'space' between numbers + inspection
void generate(string & numb, int pos, int sum)
{
    static const string element = "+ -";
        
    if (pos >= numb.length())
    {
        string s = numb;
        
        //erase space
        while (s.find(" ") != -1)
            s.erase(s.find(" "), 1);
    
        //calculate summa
        int summa = 0, num;
        stringstream buffer(s);
        while (buffer >> num)
            summa += num;
    
        //inspection
        if (summa == sum)
            cout << s << "=" << sum << endl;
        return;
    }
    
    //generate next
    int i = (pos) ? 0 : 1;
    for (; i < element.size(); i++)
    {
        numb[pos] = element[i];
//	std::cout<<"Numb = "<<numb<<std::endl;
        generate(numb, pos + 2);
    }
}
