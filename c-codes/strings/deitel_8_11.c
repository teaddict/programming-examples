#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

char buyuk(char *s)
{

}

void main()
{
    char *article[5]={"the", "a", "one", "some","any",'\0'},
         *noun[5]={"boy", "girl", "dog", "town","car",'\0'},
         *verb[5]={"drowe","jump", "ran", "walked","skipped",'\0'},
         *pre[5]={"to", "from", "over", "und","on",'\0'};
  int i,k,j ;
    char swap[5];

srand(time(NULL));

i=rand()%5;
article[i]=toupper(article[i]);

printf("%s %s %s %s %s %s.\n",article[i],noun[rand()%5],verb[rand()%5],pre[rand()%5],article[rand()%5],noun[rand()%5]);


}
