#include <stdio.h>
// #include "./custom.h"
#include "./custom.c"
#include "./parent.c"
// #include "./parent2.c"
// #include "./parent2.h"
// #include "./parent.h"

int main()
{
    printf("请输入年龄:");
    int age;
    // hello("C");
    // int result = test(12);
    // printf("result: %d", result);
    // scanf 用于终端交互接收用户输入的变量
    // age变量的地址&age, &是C语言中的一个地址运算符，可以用来获取变量的地址。
    scanf("%d", &age);

    printf("Your age is %d.", age);
    return 0;
}
