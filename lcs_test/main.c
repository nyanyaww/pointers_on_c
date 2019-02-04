#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "error/error.h"

#define MALLOC(num, type) (type *)malloc((num) * sizeof(type))

typedef struct my_test_struct
{
    int test_int;
} my_test_struct;

int main(int argc, char const *argv[])
{
    // if (argc != 2)
    // {
    //     CODE_ERROR(SOME_ERROR, some_error_code);
    // }
    int j = 0;
    my_test_struct *testI = NULL;
    testI = MALLOC(1, my_test_struct);
    my_test_struct s = {j};
    for (j = 0; j < 200; j++)
    {
        s.test_int = j;
        *(testI + j) = s;  
    }
    for (int i = 0; i < 150; i++)
    {
        printf("%d\n", testI[i].test_int);
        // testI += 1;
    }
    return 0;
}
