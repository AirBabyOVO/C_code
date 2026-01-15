#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int weekday = 3;
    char grade = 'B';

    // 1. switch基本用法 + break（避免case穿透）

    printf("===== 1. switch基本用法 =====\n");
    switch (weekday) 
    {  // 括号内为「表达式」，结果必须是整型/字符型
    case 1:  // case 后跟「常量值」（不能是变量、表达式），冒号结尾
        printf("今天是星期一，开始搬砖\n");
        break;  // 跳出switch语句，避免执行后续case（核心！）
    case 2:
        printf("今天是星期二，继续搬砖\n");
        break;
    case 3:
        printf("今天是星期三，再坚持一下\n");
        break;
    case 4:
        printf("今天是星期四，快要解放了\n");
        break;
    case 5:
        printf("今天是星期五，明天周末\n");
        break;
    case 6:
        printf("今天是星期六，休息啦\n");
        break;
    case 7:
        printf("今天是星期日，准备下周搬砖\n");
        break;
    default:  // 兜底分支，当所有case都不匹配时执行（可选，建议加上）
        printf("输入的数字%d无效，星期只能是1-7\n", weekday);
        break;  // 最后一个分支的break可省略
    }

    // 2. switch的case穿透（故意省略break，合并多个case的逻辑）
    // 场景：根据成绩等级判断是否合格（利用穿透简化代码）
    printf("\n===== 2. switch的case穿透 =====\n");
    switch (grade) 
    {
    case 'A':
    case 'B':
    case 'C':  // A/B/C 都执行同一逻辑（穿透效果）
        printf("你的等级是%c，成绩合格\n", grade);
        break;
    case 'D':
    case 'E':  // D/E 都执行同一逻辑
        printf("你的等级是%c，成绩不合格\n", grade);
        break;
    default:
        printf("输入的等级%c无效，只能是A-E\n", grade);
        break;
    }

    return 0;
}