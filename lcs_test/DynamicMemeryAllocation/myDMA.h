#ifndef __MY_DMA__H__
#define __MY_DMA__H__
#include <stdlib.h>

#define malloc
#define MALLOC(num, type) (type *)alloc((num) * sizeof(type))

#define OUT_OF_MEMERY "out of memery!\n"

void *alloc(size_t size);

#endif