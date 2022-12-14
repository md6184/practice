#include<stdio.h>
int fun(int i,int m){
    if(m==0)
        return 1;
    return i*fun(i,m-1);
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d",fun(n,m));
    return 0;
}
