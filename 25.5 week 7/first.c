#include<stdio.h>
int main()
{
    FILE *file;

   file= fopen("test.text","w");
   if(file==NULL){
    printf("file doesnot opened",file);

   }
else {

    printf("file is opened",file);
  fclose(file);

}


}