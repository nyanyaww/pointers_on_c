#include "myDMA.h"
#include <stdio.h>

void *alloc(size_t size)
{
    void *new_memery;
    new_memery = malloc(size);
    if (new_memery == NULL)
    {
        fprintf(stderr, OUT_OF_MEMERY);
        exit(1);
    }
    return new_memery;
}