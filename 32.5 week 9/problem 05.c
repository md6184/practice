#include<stdio.h>
int sum(int i,int n){
    if(i>n)
        return 0;
    printf("%d ",i);
    if(i<n)
        printf("+ ");
    if(i==n)
        printf("= ");
    return i+sum(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(1,n));
    return 0;
}
