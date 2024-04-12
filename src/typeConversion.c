#include <stdio.h>


int main() {
    int a = 10; 
    int b = 4;
    float c;

    c = a / b; // 整数除法，d但没有强制类型转化，先进行整数运算，再进行浮点数赋值
    printf("c = %f\n", c); // 输出 c = 2.000000
    c= (float) a / b; // 强制类型转换，结果为浮点数，先将a转换为浮点数，再进行浮点数除法
    printf("c = %f\n", c); // 输出 c = 2.500000
    c= (float) (a / b); // 先进行整数运算，再进行浮点数赋值
    printf("c = %f\n", c); // 输出 c = 2.000000

    char d = 'a';
    printf("'a'=%d  a=%c\n",d,d); // 输出 'a'=97
}