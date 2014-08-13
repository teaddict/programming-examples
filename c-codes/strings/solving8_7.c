/*Write a program that takes data a line at a time and reverses the words of the
line. For example,
Input: birds and bees
Reversed: bees and birds
The data should have one blank between each pair of words.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char s[])
{
   char *a,*b,*c;
   int i=0;

   a=strtok(s," ");
   b=strtok(NULL," ");
   c=strtok(NULL," ");
  printf("%s %s %s",c,b,a);

}

void main()
{
    char str[80];

    printf("Enter a string>\n");
    gets(str);

    reverse(str);


}
