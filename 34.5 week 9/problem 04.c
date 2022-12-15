#include<stdio.h>
int main()
{
    FILE *a=fopen("input4.txt","r");
    FILE *b=fopen("output4.txt","w");
    if(a==NULL)
    {
        printf("Invalid File");
        return 0;
    }
    int n;
    fscanf(a,"%d",&n);
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        int m;
        fscanf(a,"%d",&m);
        int r=m%10;
        sum+=r;
    }
    fprintf(b,"Sum = %d",sum);
    fclose(a);
    fclose(b);
    return 0;
}
