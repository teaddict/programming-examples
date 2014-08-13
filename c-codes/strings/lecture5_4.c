//kelime karşılaştırması
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void main()
{
    char str1[100],str2[100],cont1[100],cont2[100];
    int i,t,j,k;

    printf("enter string1\n");
    scanf("%s",str1);
    printf("enter string2\n");
    scanf("%s",str2);

    i=strlen(str1);
    k=strlen(str2);

    if(i!=k)
    {
      t=2;
      printf("words are not same\n");
    }//if
    else
    {
        for(j=0; j<i-1; j++)
        {
            if(islower(str1[j])!=0)
            cont1[j]=toupper(str1[j]);
            else
            cont1[j]=str1[j];

            if(islower(str2[j])!=0)
            cont2[j]=toupper(str2[j]);
            else
            cont2[j]=str2[j];

            if(cont1[j]!=cont2[j])
            t=2;
        }//for


    }//else

    if(t==2)
    printf("words are not same\n");
    else
    printf("same words\n");

}
