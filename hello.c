#include <stdio.h>
#include "./custom.h"



int main(){
    hello("C");
    test(12);
    return 0;
}

int hello(char* msg){
    int size=sizeof(msg);
    printf("hello:%s\n",msg);
    return 0;
}

int test(int num1){
    printf("num:%d \n",num1);
    return 0;
}
