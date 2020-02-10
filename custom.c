#include <stdio.h>
#include "./custom.h"

int hello(char *msg)
{
    int size = sizeof(msg);
    printf("hello:%s\n", msg);
    return 0;
}