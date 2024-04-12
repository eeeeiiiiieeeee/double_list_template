#include "stdio.h"
#include "string.h"


char strA[100]={0};
char strB[100]={0};



int main()
{
    strcpy(strA, "qwerrq");
    strcpy(strB, "12345");
    /*不能让它指向其他地方，但可以修改指向地址的值*/
    char *const ptr =strA;
    // const char *ptr =strA;
     strcpy(ptr, strB);

    // ptr =strB;

    printf("%s**********%c\n",strA,ptr[0]);

    char value='a';
    /*不能让它指向其他地方，不能通过 pval 修改 value 的值,可以通过其他修改value的值*/
    const char *pval=&value;
    value='b';
    printf("vaule:%c*******%p*********%p\n",*pval,pval,&value);


    return 0;
}