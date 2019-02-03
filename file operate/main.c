#include <stdio.h>

FILE *open_file(char *file)
{
   FILE *fp = NULL;
   fp = fopen(file, "w+");
   return fp;
}

int main(void)
{
   FILE *fp = NULL;

   fp = open_file("testII.txt");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   return 0;
}