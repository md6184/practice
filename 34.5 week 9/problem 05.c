#include<stdio.h>
int main()
{
    FILE *a=fopen("input5.txt","r");
    FILE *b=fopen("output5.txt","w");
    if(a==NULL)
    {
        printf("Invalid File");
        return 0;
    }
    int n;
    fscanf(a,"%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            fprintf(b,"  ");
        }
        for(int j=1; j<=n; j++)
        {
            fprintf(b,"# ");
        }
        fprintf(b,"\n");
    }
    fclose(a);
    fclose(b);
    return 0;
}
