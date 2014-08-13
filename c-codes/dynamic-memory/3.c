#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *ptr_malloc;
	int *ptr_calloc;

	int i;

	ptr_malloc=(int *)malloc(10*sizeof(int));
	ptr_calloc=(int *)calloc(10,sizeof(int));

	if(ptr_malloc==NULL || ptr_calloc==NULL)
	{
		printf("yetersiz bellek\n");
		exit(1);
	}

	for(i=0; i<10; i++)
	{
		printf("ptr[%d]=%d\n",i,ptr_malloc[i]);
	}


	for(i=0; i<10; i++)
	{
		printf("ptr[%d]=%d\n",i,ptr_calloc[i]);
	}

	system("pause");
}