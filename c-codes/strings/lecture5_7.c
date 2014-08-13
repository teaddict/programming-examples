// atof: stringi double cevirir
// atoi: stringi int cevirir
// atol: stringi long int cevirir

#include<stdio.h>
#include<stdlib.h>

void main()
{
    double d;
    int i;
    long a;

    d=atof("99.0");
    printf("\n%s%3.f\n%s%3.f\n",
           "the string \"99.0\" converted double is:",d,
           "the converted value divided by 2 is:",d/2);

    i=atoi("99");
    printf("\n%s%d\n%s%d\n",
           "the string \"99.0\" converted to integer is:",i,
           "the converted value minus 40 is:",i-40);

    a=atol("9900000");
    printf("\n%s%ld\n%s%ld\n",
           "the string \"99.0\" converted to integer is:",a,
            "teh converted value divided by 2 is:",a/2);

}
