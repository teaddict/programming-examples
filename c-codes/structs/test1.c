#include<stdio.h>
#include<stdlib.h>

struct
{
    double x,y,sonuc;

}tri,rect;



void main()
{
    char c;
    printf("enter for triangular area 't'\nenter for rectangular area 'r'\n");
    scanf("%c",&c);

    if(c=='t')
    {
        printf("enter x and y>\n");
        scanf("%lf%lf",&tri.x,&tri.y);
        tri.sonuc=(tri.x*tri.y)/2;
        printf("%f\n",tri.sonuc);
            }

   else if(c=='r')
    {
        printf("enter x and y>\n");
        scanf("%lf%lf",&rect.x,&rect.y);
        rect.sonuc=(rect.x*rect.y);
        printf("%f\n",rect.sonuc);
            }

            else
            {
                printf("ERROOOOOOOOOOOOOOOOR\n");
                exit(0);
            }
}
