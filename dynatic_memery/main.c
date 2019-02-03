#define LONG 10
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
main()
{
    char *message, buf[LONG];
    gets(buf);
    message = (char *)realloc(NULL, strlen(buf) + 1);
    strcpy(message, buf);
    puts(message);
    gets(buf);
    message = (char *)realloc(message, (strlen(message) + strlen(buf) + 1));
    strcat(message, buf);
    puts(message);
    return 0;
}