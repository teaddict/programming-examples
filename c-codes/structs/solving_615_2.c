#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STR_LENGTH 20
typedef struct {
char event[STR_LENGTH],
entrant[STR_LENGTH],
country[STR_LENGTH];
int place;
} olympic_t;

olympic_t com;

void main()
{
    char n[20];
    printf("Competition Infos\n\n");

    printf("Enter Event: ");
    gets(n);
    strcpy(com.event,n);
    //scanf("%s",&com.event);

    printf("Enter Entrant: ");
    scanf("%s",&com.entrant);

    printf("Enter Country: ");
    scanf("%s",&com.country);

    printf("\nEnter Event: %s",com.event);

    printf("\nEnter Entrant: %s",com.entrant);

    printf("\nEnter Country: %s",com.country);
}
