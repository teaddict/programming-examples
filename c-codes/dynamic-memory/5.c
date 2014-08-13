#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *getname(void);
char *strcon(const char*,const char *);

void main()
{
	char *p;
	char *s1,*s2,*s3;

	p=getname();

	printf("girilen string: %s\n",p);

	s1=getname();
	printf("\n");
	s2=getname();
	s3=strcon(s1,s2);
	printf("strcon sonucu olusan string: %s",s3);

	free(p);
	free(s3);

	system("pause");
}

char *getname(void)
{
	char s[30];
	char *ptr;

	printf("ismi giriniz:");
	gets(s);




	ptr=(char *)malloc(strlen(s)+1);
	if(ptr==NULL)
	{
		printf("can not allocate memory!\n");
		exit(0);
	}

	strcpy(ptr,s);

	system("pause");
	return ptr;
}

char *strcon(const char *s1,const char *s2)
{
	char *ptr;

	ptr=(char *)malloc(strlen(s1)+strlen(s2) +1);
	if(ptr==NULL)
	{
		printf("can not allocate memory\n");
		exit(0);
	}

	strcpy(ptr,s1);
	strcat(ptr,s2);

	return ptr;
}


