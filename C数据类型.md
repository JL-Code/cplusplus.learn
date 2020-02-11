# 数据类型

> C 语言没有 `Boolean` 类型，取而代之的是 `0` 和 `1`。所有非 `0` 情况都为 **“真”**，只有 `0` 才是 **“假”**

## 基本数据类型

`int`、`flot`、`double`、`char`

## 空类型

`void`

## 指针类型

`void *`

## 构造类型

数组

声明：
> 语法： <类型><变量名> [<常量>];

```c
// 合法的声明
int a [10]; // 整型常量
int b ['A']; // 字符常量，其实就是65
int c [3*4]; // 整型常量表达式
int d[] = {0,1,2} // 当对全部数组元素都赋初值时，可以省略元素个数
int e[4]={0,2} // 当数组为整型时，初始化未确定初值的元素，默认为0，所以上面的 e[2]、e[3]都为 0

// 无效的声明
int size = 10;
int arr [size]; // 使用变量设置数组大小
int arr2 []; // 为设置数组大小

```

数组长度:

```c
int arr [10] = {2,1};
int count = sizeof(arr) / sizeof(arr[0]); // 利用利用 `sizeof` 获取 `arr` 的总字节数除以 `arr` 单个元素占用的字节数
printf("arr size: %lu\n",count);
```

注：C语言中 **编译器是不会对数组下标越界进行检查**，所以在访问数组时自行验证。

`struct` 结构体
`union` 公用体
`enum` 枚举

## sizeof

> sizeof可以用来计算一个变量或者一个常量、一种数据类型所占的内存字节数。

sizeof(<常量/变量>)

```c
sizeof(10)
int a = 10;
sizeof(a);
```

sizeof <常量/变量>

```c
sizeof 10;
int a = 10;
sizeof a;
```

sizeof(<数据类型>)

```c
sizeof(float)
```

## include 指令

> `#include` 是 `C` 语言的预处理指令之一，所谓预处理，就是在编译之前做的处理，预处理指令一般以 # 开头。
> 语法：`#include <文件名>` , 常见的文件名包括：`*.h` (头文件 **Header File**,头文件可以用于声明函数。在 C 语言中函数必须在使用前声明。)、`*.ccp`、`*.hpp` 等，甚至可以使 *.txt、*.<任意可被 `C/C++` 识别的文件>。

`#include` 有点类似 `ES6` 的 `import` 或 java 的 `import` 或 `C#` 的 `using`

`#include` 后面可以跟绝对路径

`#include <>` 和 `#include ""` 的区别：
> 当被 `#include` 的文件路径不是**绝对路径**的时候，有不同的搜索顺序

1. 当使用双引号 "" 时搜索顺序如下：
   * 先在这条 `#include` 指令的父文件所在文件夹内搜索，所谓的父文件，就是这条 `#include` 指令所在的文件。
   * 如果上一步找不到，则在父文件的父文件所在文件夹内搜索;
   * 如果上一步找不到，则在编译器设置的 `#include` 路径内搜索;
   * 如果上一步找不到，则在系统的 `INCLUDE` 环境变量内搜索。
2. 对于使用尖括号 <> 来 `#include` 文件，搜索的时候按以下顺序:
   * 直接在编译器设置的 `INCLUDE` 环境变量里搜索;
   * 如果上一步找不到，则在系统的 `INCLUDE` 环境变量内搜索。

`clang` 编译器，`clang` 设置 `include` 路径默认是（11.0是编译器版本）：`/usr/local/include`

```shell
# 查看版本
clang -v
# 查看编译器的默认include路径
# echo | gcc -v -x c++ -E -
# echo | g++ -v -x c++ -E -
```

Mac系统的 `include` 路径有：

```text
/usr/include
/usr/local/include
```

## 控制语句

### 循环语句

`do while`
`while`
`for`

### 条件语句

`if`
`if else`
`switch`

### goto 语句

`goto`
