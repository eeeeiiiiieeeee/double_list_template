#include <stdio.h>
#include "stdlib.h"

int max(int a, int b)
{
    printf("maxvalue:%d\n",a > b ? a : b);
    return a > b ? a : b;
}

int callback(int a,int b, int (*callbackfun)(int, int))
{   
    int c= callbackfun(a,b);
    printf("cvalue:%d\n",c);
    return c;
}

int ergodic_str(int strtest[],int size)
{
    int min =strtest[0];

    for (size_t i = 0; i < size; i++)
    {
        if (strtest[i] < min)
        {
            min=strtest[i];
        }
    }
    return min;
}

int ergodic_str_min(int(*min1)(int str1[],int size),int str1[],int str2[],int size)
{
    int minresult1 =min1(str1,size);
    int minresult2 =min1(str2,size);
    return minresult1 < minresult2 ? minresult1 : minresult2;
}


int main() {

        int x = 5;
        int y = 10;

        int randommin[10]={0};
        int randommix[10]={0};
        for (size_t i = 0; i < 10; i++)
        {
            randommin[i]=rand();
            randommix[i]=rand();
        }
        
        // int z= callback(x, y, max);
        int z= ergodic_str_min(ergodic_str,randommin,randommix,10);
        printf("zvalue:%d\n",z);


        // /*函数名本身就是指向函数的指针，所以可以直接将函数名赋值给函数指针，也可以取函数名的地址赋值给函数指针，这两种方法等效*/
        // int (*z)(int,int) = max;
        // // int (*z)(int,int) = &max;
        // int w = z(x, y); // 调用函数指针 
        // w =(*z)(x, y); // 调用函数指针
        // /*函数指针*z z等效 */
        // printf("funaddreess:%p**********%p\n",*z,z);
        // printf("The sum of %d and %d is %d\n", x, y, w);


    return 0;
}


