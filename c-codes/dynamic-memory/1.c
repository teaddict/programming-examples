#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *dizi;
	int n,i;

	printf("enter the number of elements>");
	scanf("%d",&n);

	dizi=(int *)malloc(n*sizeof(int));

	for(i=0; i<n; i++)
	{
		printf("enter number\n");
		scanf("%d",&dizi[i]);
}
	printf("\nthe dynamic array is\n");
	for(i=0; i<n; i++)
		printf("the value of %d is %d\n",i,dizi[i]);
	dizi++;

	printf("size= %d\n",i);

	system("pause");
}