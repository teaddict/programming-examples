#include<stdio.h>
#include<stdlib.h>

struct student
    {
        int id;
        char *name;
        float percentage;
    };

void main()
{
    struct student st;

    st.id=1;
    st.name="fatih";
    st.percentage=90.5;

    printf("ID: %d\n",st.id);
    printf("Name: %s\n",st.name);
    printf("Perc: %.2f\n",st.percentage);

}
