#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int score = 85;
    int age = 18;
    float salary = 15000.0f;

    // 1. 单分支if（满足条件才执行，不满足则跳过）
    
    printf("===== 1. 单分支if =====\n");
    if (age >= 18) { 
        printf("你已成年，具备完全民事行为能力\n");
    }

    // 2. 双分支if-else（二选一，满足条件执行if，否则执行else）
    
    printf("\n===== 2. 双分支if-else =====\n");
    if (score >= 60) {
        printf("你的成绩为%d，及格啦！\n", score);
    }
    else {
        printf("你的成绩为%d，不及格，需要补考\n", score);
    }

    // 3. 多分支if-else if-else（多选一，按顺序判断，满足一个即终止）
    
    printf("\n===== 3. 多分支if-else if-else =====\n");
    if (score >= 90 && score <= 100) {  // 多条件用逻辑运算符连接（&&与、||或、!非）
        printf("成绩等级：A（优秀）\n");
    }
    else if (score >= 80 && score < 90) {
        printf("成绩等级：B（良好）\n");
    }
    else if (score >= 70 && score < 80) {
        printf("成绩等级：C（中等）\n");
    }
    else if (score >= 60 && score < 70) {
        printf("成绩等级：D（及格）\n");
    }
    else if (score >= 0 && score < 60) {
        printf("成绩等级：E（不及格）\n");
    }
    else {  // 处理所有非法输入（兜底分支，可选但建议加上）
        printf("输入的成绩%d无效，请输入0-100之间的数字\n", score);
    }

    // 4. 嵌套if（if语句内部嵌套if/if-else，处理复杂多层条件）
    
    printf("\n===== 4. 嵌套if =====\n");
    if (age >= 18) {  // 外层条件：是否成年
        if (salary >= 10000.0f) {  // 内层条件：在成年的基础上，判断薪资是否达标
            printf("你是成年人士，且月薪%.2f，达到高薪标准\n", salary);
        }
        else {
            printf("你是成年人士，但月薪%.2f，暂未达到高薪标准\n", salary);
        }
    }
    else {
        printf("你尚未成年，暂不评估薪资标准\n");
    }

    return 0;
}