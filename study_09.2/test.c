#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //略初始化表达式（循环变量已在外部定义）
    int i = 1;  // 外部定义并初始化循环变量
    for (; i <= 5; i++) {  // 初始化表达式省略，分号保留
        printf("当前i：%d\n", i);
    }
    printf("\n");

    //省略更新表达式（在循环体内手动更新循环变量）
    for (int j = 1; j <= 5; ) {  // 更新表达式省略，分号保留
        printf("当前j：%d\n", j);
        j++;  // 循环体内手动更新，否则会陷入死循环
    }
    printf("\n");

    //省略条件判断表达式（默认条件为真，需在循环体内手动终止循环）
    int k = 1;
    for (; ; k++) {  // 三个表达式都省略，仅保留两个分号，默认是死循环
        if (k > 5) {  // 手动添加终止条件，避免无限循环
            break;
        }
        printf("当前k：%d\n", k);
    }
    printf("\n");

    //多变量初始化与更新
    int a, b;
    // 初始化a=1、b=10；条件a<=5；更新a+1、b-1
    for (a = 1, b = 10; a <= 5; a++, b--) {
        printf("a=%d, b=%d\n", a, b);
    }

    return 0;
}