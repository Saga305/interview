#include <iostream>
using namespace std;
int BinarySearch(int a[],int size, int key)
{
    int l = 0;
    int h = size;
    int mid;
    while (l <= h)
    {
        mid = (l+h)/2;
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid] > key)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main() {
int a[] = {1,2,3,4,5,8,11,12,13,15,18,19};
int key = 19;
int index =BinarySearch(a,sizeof(a)/sizeof(a[0]),key);

if(index >= 0)
{
    cout<<key<<" is at index "<<index<<endl;
}
else
{
    cout<<"key is not found"<<endl;
}
    return 0;
}