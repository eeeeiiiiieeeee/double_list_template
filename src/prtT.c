#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include <stddef.h>


int str_p[10]={1,2,3,4,5,6,7,8,9,10};

typedef struct{
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;
}address_alignment;

int main() {

    // int valueA=0;
    // int *pvalA;
    // pvalA=&valueA;
    // int **ppvalA=&pvalA;

    // valueA=100;
    // printf("valueA:%d****** *pA:%d******* **ppA:%d\n",valueA, *pvalA, **ppvalA);
    // printf("&valueA:%p****** *pA:%p******* *ppA:%p******** ppA%p\n",pvalA, &pvalA, *ppvalA,ppvalA);

    // int *p=str_p;
    address_alignment aa_val={
        .a=1,
        .b=2,
        .c=3,
        .d=4,
        .e=5.9,
        .f=6.8
    };
    address_alignment aa[10];
    address_alignment *p=aa;

    printf("a:%p\n",&aa_val.a);
    printf("b:%p\n",&aa_val.b);
    printf("c:%p\n",&aa_val.c);
    printf("d:%p\n",&aa_val.d);
    printf("e:%p\n",&aa_val.e);
    printf("f:%p\n",&aa_val.f);

    for (size_t i = 0; i < (sizeof(aa)/sizeof(address_alignment)); i++)
    {
        /*注意指针运算和其他运算的区别，指针运算实际是地址偏移*/
        printf("********address:%p\n",(p+i));
    }

    return 0;
}