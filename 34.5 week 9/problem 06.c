#include<stdio.h>
int main()
{
    FILE *a=fopen("input6.txt","r");
    FILE *b=fopen("output6.txt","a");
    if(a==NULL)
    {
        printf("Invalid File a");
        return 0;
    }
    int n;
    fscanf(a,"%d",&n);
    if(n%400==0||(n%4==0&&n%100!=0))
    {
        fprintf(b,"%d-->YES\n",n);
    }
    else
    {
        fprintf(b,"%d-->NO\n",n);
    }
    fclose(a);
    fclose(b);
    return 0;
}
