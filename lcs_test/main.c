#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Error/error.h"
#include "DynamicMemeryAllocation/myDMA.h"
#include "FileOperate.h"
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t t;
    struct tm *lt;
    time(&t);                                                                                                        //获取Unix时间戳。
    lt = localtime(&t);                                                                                              //转为时间结构。
    printf("%d/%d/%d %d:%d:%d\n", lt->tm_year + 1900, lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec); //输出结果
    FILE *fp = open_file_with_write("test.log");
    if (argc != 2)
    {
        fprintf(fp, "%d/%d/%d %d:%d:%d\n", lt->tm_year + 1900, lt->tm_mon,
                lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec); //输出结果
        CODE_ERROR(fp, SOME_ERROR, some_error_code);
    }
    return 0;
}
