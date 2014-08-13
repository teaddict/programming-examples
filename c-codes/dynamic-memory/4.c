#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,i;

	ptr=(int *)calloc(5,sizeof(int));

	if(ptr==NULL)
	{
		printf("bellek yetersiz\n");
	}

	for(i=0; i<5; i++)
	{
		printf("ptr[%d]=%d\n",i,ptr[i]);
	}
	printf("\n");

	ptr=(int *)realloc(ptr,sizeof(int)*10);

	if(ptr==NULL)
	{
		printf("bellek yetersiz\n");
		exit(0);
	}
	for(i=0; i<10; i++)
		printf("ptr[%d]=%d\n",i,ptr[i]);

	system("pause");
}