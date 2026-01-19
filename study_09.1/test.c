#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //打印1到10的整数
    printf("基本for循环（打印1-10）\n");
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d ", i);  // 循环体：每次打印当前i的值
    }
    printf("\n\n");

    //for循环实现求和 - 计算1+2+3+...+100的结果
    printf("for循环求和（1-100）\n");
    int sum = 0;
    // 循环变量i从1遍历到100，每次将i累加到sum中
    for (int i = 1; i <= 100; i++) 
    {
        sum += i;  // 等价于 sum = sum + i;
    }
    printf("1+2+...+100 = %d\n\n", sum);

    //循环变量递减 - 打印10到1的整数（倒序遍历）
    printf("for循环（倒序打印10-1）\n");
    for (int i = 10; i >= 1; i--) 
    {
        printf("%d ", i);
    }
    printf("\n\n");

    //指定步长遍历 - 打印1到20之间的所有奇数（步长为2）
    printf("for循环（指定步长，打印1-20奇数）\n");
    for (int i = 1; i <= 20; i += 2) 
    {  // 更新表达式为i+=2（每次+2，步长=2）
        printf("%d ", i);
    }
    printf("\n\n");

    return 0;
}