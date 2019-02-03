#include "FileOperate.h"

FILE *open_file_with_write(char *file)
{
    return fopen(file, "a+");
}

