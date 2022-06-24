#include <stdio.h>
int main()
{
     FILE *ptr = NULL;
     ptr = fopen("myFile.txt","w+");
     // char c;
     // c = fgetc(ptr);
     // printf("%c",c);
     // fclose(ptr);

     // char str[50];
     // fgets(str,44,ptr);
     // printf("%s\n",str);
     fputc('a',ptr);
     fputs("This is AK",ptr);
     return 0;
}