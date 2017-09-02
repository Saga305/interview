//what will be the output of the following program.Uncomment the prints, compile and run it for better understanding.

#include<iostream>
#include<cstdlib>
#include<cstdio>
int main()
{
	int *ptr;
	ptr = (int*) malloc(3*sizeof(int));

	if(!ptr)
	{
		std::cout << "Memory Allocation Failed"<<std::endl;
		exit(1);
	}
	
#if 0
	for (int i = 0; i < 3 ; i++)
	{
		printf("Address of ptr[%d] = %p\n",i,(ptr +i)); 
	}
#endif

	ptr = ptr + 1;
//	printf("After ptr++ address of ptr = %p\n",ptr); 

	free(ptr);

	return 0;
}
