#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void main()
{
	char *s[5];
	int k;

	for(k=0; k<5; k++)
	{
		s[k]=(char *)malloc(30);
		if(s[k]==NULL)
		{
			printf("can not allocate Memory!\n");
			exit(0);
		}
		printf("ismi giriniz>\n");
		gets(s[k]);
	}
	for(k=0; k<5; k++)
	{
		printf("%s\n",s[k]);
	}

	system("pause");
}