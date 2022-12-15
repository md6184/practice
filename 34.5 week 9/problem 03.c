#include<stdio.h>
int main()
{
    FILE *a=fopen("input3.txt","r");
    FILE *b=fopen("output3.txt","w");
    if(a==NULL)
    {
        printf("Invalid File");
        return 0;
    }
    int t;
    fscanf(a,"%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        fscanf(a,"%d",&n);
        if(n>0)
        {
            for(int i=n; i>=-n; i--)
            {
                fprintf(b,"%d ",i);
            }
        }
        else
        {
            for(int i=n; i<=-n; i++)
            {
                fprintf(b,"%d ",i);
            }
        }
        fprintf(b,"\n");
    }
    fclose(a);
    fclose(b);
    return 0;
}
