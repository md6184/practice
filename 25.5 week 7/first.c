#include<stdio.h>
int fun(int a[],int n)
{
    if(n==0)
        return 0;
    int s=fun(a+1,n-1);
    return *(a)+s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int d=fun(a,n);
    printf("%d",d);
    return 0;
}
