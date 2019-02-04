#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Error/error.h"
#include "DynamicMemeryAllocation/myDMA.h"
#include "FileOperate.h"
#include "Log/log.h"

#define DEBUG !0
#define MAX_LINE 80
#if DEBUG

int main(int argc, char const *argv[])
{
    char buff[255];
    int len = 0;
    int line = 0;
    FILE *fp = fopen("conf.ini", "r");
    while (fgets(buff, MAX_LINE, fp) != NULL)
    {
        line += 1;
        len = strlen(buff);
        if (buff[0] != '\n')
        {
            if (buff[len - 1] == '\n')
                buff[len - 1] = '\0';
            printf("line %d :%s\n", line, buff);
        }
    }
    return 0;
}
#endif
