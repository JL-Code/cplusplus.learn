#include <stdio.h>
// #include "./custom.h"
#include "./custom.c"
#include "./parent.c"
// #include "./parent2.c"
// #include "./parent2.h"
// #include "./parent.h"

int main()
{
    // printf("请输入年龄:");
    int arr[10] = {2, 1};
    int count = sizeof(arr) / sizeof(arr[0]); // 利用利用 `sizeof` 获取 `arr` 的总字节数除以 `arr` 单个元素占用的字节数
    printf("arr size: %d\n", count);
    int b = 0;
    int c = 1;
    // hello("C");
    // int result = test(12);
    // printf("result: %d", result);
    // scanf 用于终端交互接收用户输入的变量
    // age变量的地址&age, &是C语言中的一个地址运算符，可以用来获取变量的地址。
    // scanf("%d %d %d", &age, &b, &c);
    // printf("Your age is %d \n", age);
    // printf("变量age的地址：%p\n", &age);
    // b = c++;
    b = ++c;
    printf("b: %d \n", b);
    if (b == 2)
    {
        printf("b: %d \n", b);
    }
    return 0;
}
