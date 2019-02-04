#include <time.h>
#include <stdio.h>

#define LOG_FILE "./Log/log/test.txt"

void writeTime()
{
    FILE *fp = fopen(LOG_FILE, "a+");
    time_t t;
    struct tm *lt;
    time(&t);           //获取Unix时间戳。
    lt = localtime(&t); //转为时间结构。
    fprintf(fp, "%d/%d/%d %d:%d:%d\n", lt->tm_year + 1900,
            lt->tm_mon, lt->tm_mday, lt->tm_hour, lt->tm_min, lt->tm_sec);
}