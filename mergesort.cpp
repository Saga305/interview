#include<iostream>
using namespace std;

void merge(int A[ ] , int start, int mid, int end) {
	int p = start ,q = mid+1;

	int Arr[end-start+1] , k=0;

	for(int i = start ;i <= end ;i++)
	{
		if(p > mid)   
		{
			Arr[ k++ ] = A[ q++] ;
		}
		else if ( q > end) 
		{
			Arr[ k++ ] = A[ p++ ];
		}
		else if( A[ p ] < A[ q ]) 
		{
			Arr[ k++ ] = A[ p++ ];
		}
		else
		{
			Arr[ k++ ] = A[ q++];
		}
	}
	for (int p=0 ; p< k ;p ++) {
		A[ start++ ] = Arr[ p ] ;                          
	}
}

void mergesort(int a[], int l, int h)
{
	if(l <h)
	{
		int mid = (l+h)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,h);
		merge(a,l,mid,h);
	}
	return;
}

int main()
{
	int a[] = {10,4,5,2,3,9,7,6,1,8};
	int n = sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n);
	for(int i = 0; i <n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
