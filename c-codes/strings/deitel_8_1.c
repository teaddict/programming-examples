#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{

int c=97,x,y,z;
double d,e,f;
char *ptr;
char s1[100],s2[100];

c=toupper(c);

printf( "'%c'%sdigit\n", c, isdigit( c ) ? " is a " : " is not a " );

printf("%s is converted to long %ld\n","1234567",atol("1234567"));

printf("'%c'%scontrol character\n",c,iscntrl(c)? "is a " : "is not a ");

gets(s1);
puts(s1);

ptr=strchr(s1,c);

putchar(c);

printf("\n%s is converted to double %f\n","8.63582",atof("8.63582"));

printf("'%c'%sletter",c,isalpha(c) ? "is a " : "is not a ");

c=getchar();

ptr=strstr(s1,s2);

printf("'%c'%scharacter\n",c,isprint(c) ? "is a " : "is not a ");

sscanf("1.27 10.3 9.8","%f%f%f",&d,&e,&f);

strcpy(s1,s2);

printf("s1 compares s2 is %d\n",strcmp(s1,s2));

strncat(s1,s2,10);

strlen(s1);






}
