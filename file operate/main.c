#include <stdio.h>
#include "FileOperate.h"

int main(void)
{
   FILE *fp = NULL;

   fp = open_file_with_write("testII.txt");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   return 0;
}

