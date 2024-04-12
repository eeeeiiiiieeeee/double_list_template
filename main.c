#include <stddef.h>
#include <stdio.h>
#include "string.h"
 
const int MAX = 4;
 
int main ()
{
   const char *names[] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };

   const char  names2[][20] = {
                   "Zara Ali",
                   "Hina Ali",
                   "Nuha Ali",
                   "Sara Ali",
   };

   // const char names3[] = "Zara Ali";

   char *names3 = "Zara Ali";



   int i = 0;
   size_t size = strlen(names[0])+1;
   int len = sizeof(names)/sizeof(names[0]);
   printf("char size:%zu  len++++++ %d\n",size,len);

   printf("Value of names3 = %s 地址*******%p\n", names3 ,(void*)names3);

   for ( i = 0; i < len; i++)
   {
      /*疑点:字符串size为9，但字符串地址显示长度不够9位；解释：&names[i]相当于取字符串地址给地址变量，指针变量在64位系统重占8个字节，所以间隔不是9位*/
      /*打印字符串地址*/
      printf("Value of names[%d] = %s 地址*******%p\n", i, names[i] ,(void*)names[i]);

   }
   return 0;
}