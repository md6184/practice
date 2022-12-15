#include<stdio.h>
int main()
{
    FILE *a=fopen("input1.txt","r");
    FILE *b=fopen("output1.txt","w");
    if(a==NULL){
        printf("Invalid File");
        return 0;
    }
    while(1){
        char ch=fgetc(a);
        if(ch==EOF)
            break;
        fputc(ch,b);
    }
    fclose(a);
    fclose(b);
    return 0;
}
