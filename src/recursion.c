#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/*斐波那契数列，循环求解*/
int fibonacci(int n) {
    if(n <= 1)
        return n;
    int a = 0, b = 1;
    for(int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}
/*斐波那契数列，递归求解*/
int fibonacci_iterative(int n) {
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fibonacci_iterative(n-1)+fibonacci_iterative(n-2);
    }
}

/*随机递归*/
int rand_recursion(void) {
    
    int a=rand();
    int b=rand();
    static int c=0;
    if (a<b)
    {
        printf("b;%d\n",b);
        return b;
    }
    else
    {
        c++;
        return rand_recursion();
    }

}

/*阶乘*/
int factorial(int n) {
    if (n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}

int variable_parameters(int num, ...) {

    va_list args;
    /*初始化列表*/
    va_start(args, num);

    for (size_t i = 0; i < num; i++)
    {
        printf("num:%d\n",va_arg(args, int));
    }
    va_end(args);

    return 0;
}




int main(){

    int n = 5;
    printf("Fibonacci number at position %d is %d  %d\n", n, fibonacci(n),fibonacci_iterative(n));

    printf("bd:%d\n",factorial(n));

    variable_parameters(3,1,2,'A');

    return 0;
}