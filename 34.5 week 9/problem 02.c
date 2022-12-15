#include<stdio.h>
int main()
{
    FILE *a=fopen("input2.txt","r");
    FILE *b=fopen("output2.txt","w");
    if(a==NULL)
    {
        printf("Invalid File");
        return 0;
    }
    int n;
    fscanf(a,"%d",&n);
    for(int i=1; i<=n; i++)
    {
        fprintf(b,"%d ",i);
    }
    fclose(a);
    fclose(b);
    return 0;
}
