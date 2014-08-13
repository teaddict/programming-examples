#include<string.h>
#include<stdlib.h>
#include<stdio.h>

typedef struct
{
    int a;
    float b;
    char s[30];
}Ex;

void main()
{
    Ex A[1];
    Ex B[1];
    int ret,i;
    char sname[30];
    FILE *fp=fopen("binary.dat","wb");
    if(fp==NULL)
    {
        printf("can not open\n");
    }

    for(i=0;i<2;i++)
    {
	printf("Enter a integer number:");
	scanf("%d",&A[i].a);
	printf("\n");
	while( getchar() != '\n' );
	printf("Enter a float number:");
	scanf("%f",&A[i].b);
	printf("\n");// \n koymazsak scanf dan sonra gets çalışmıyor atlıyor
	while( getchar() != '\n' );
	printf("Enter a string:");
	gets(sname);
	strcpy(A[i].s,sname);
	printf("\n");
}

for(i=0; i<2; i++)
{
    fwrite(&A[i],sizeof(Ex),1,fp); //A[i] arrayinden dosyaya yazdırdıkkk
}
fclose(fp);

fp = fopen("binary.dat", "rb");
if(fp==NULL)
{
printf("Cannot open file.\n");
exit(1);
}
/* Read records from the file */
for(i=0; i<2; i++)
{
    ret=fread(&B[i],sizeof(Ex),1,fp); // dosyadan B[i] ye okuttuk
}
printf("\n\n-----RESULTS FROM FILE-----\n");
printf("INTEGER\t\tFLOAT\t\tSTRING\n");
printf("-------\t\t------\t\t------\n");

for(i=0;i<2;i++){
	printf("%d\t\t%.2f\t\t%s\n",B[i].a, B[i].b, B[i].s);
}
fclose(fp);


system("pause");
}
