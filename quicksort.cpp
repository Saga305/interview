#include <iostream>
using namespace std;

int a[] = {10,9,8,7,6,5,11};

int partition(int l,int h)
{
    int pivot = a[(l+h)/2];
    int i = l;
    int j = h;
    do
    {
       i++;
    }while (a[i] <= pivot);
    do
    {
        j--;
    }while (a[j] > pivot);
    
    if (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    
    {
      int temp = a[l];
        a[l] = a[j];
        a[j] = temp;
        
    }
    return j;
}

void quicksort(int l,int h)
{
    if(l < h)
    {
    int j = partition(l,h);
    quicksort(l,j);
    quicksort(j+1,h);
    }
    return;
}

int main() {

    quicksort(0,(sizeof(a)/sizeof(a[0])));
    
    for(int i = 0; a[i]; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
