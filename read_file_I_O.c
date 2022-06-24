#include <stdio.h>
#include <string.h>
int main()
{
     // Declare the file pointer
     FILE * p = NULL;
     // Declare the variable for the data to be read from file
     char str[50];
     p = fopen("myFile.txt","r");

     if (p==NULL)
     {
          printf("myFile.txt file falied to open.");
     }
     else{
          printf("The file is now opened.\n") ;
          while(fgets(str,50,p)!=NULL){
               printf("%s",str);
          }
     }
     return 0;
}