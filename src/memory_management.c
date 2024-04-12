#include <stdio.h>
#include <stdlib.h>


int *my_malloc(size_t size) {

    int *expression = (int *)malloc(size * sizeof(int));
    return expression;
}

int main() {
    // Your code here

    FILE *fp = fopen("test.txt", "r");

    if (fp == NULL)
    {
        printf("无法打开文件!\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);

    long file_size = ftell(fp);

    char *buffer = (char *)malloc((file_size * sizeof(char))+1);
    

    FILE *fp2 = fopen("ASCII.txt", "w+");
    if (fp2 == NULL)
    {
         printf("创建文本失败!\n");
    }

    for (size_t i = 0; i < 128; i++)
    {
        fputc((char)i,fp2);
    }
    
    fseek(fp2, 0, SEEK_END);

    long file_size2 = ftell(fp2);

    printf("file_size2: %lu\n", file_size2);

    char *buffer2 = (char *)calloc(file_size2 +128, sizeof(char));

    if (buffer2 == NULL) {
        printf("buffer2无法分配内存!\n");
    }
    else
    {
        printf("buffer2_Size:%d!\n",sizeof(int));
    }

    fseek(fp2, 0, SEEK_SET);
    fread(buffer2, 1, file_size2, fp2);
    for (size_t i = 0; i < file_size2; i++)
    {
        printf("%c",buffer2[i]);
    }
    printf("\n\n");

    buffer2 = (char *)realloc(buffer2, 1024*sizeof(char));

    if (buffer2 == NULL)
    {
         printf("buffer3无法分配内存!\n");
    }


    
    fclose(fp2);
    free(buffer2);


    if (buffer == NULL)
    {
        printf("无法分配内存!\n");
        return 1;
    }

    fseek(fp, 10, SEEK_SET);

    unsigned long read_sucsess =  fread(buffer, 1, file_size, fp);

    printf("read_sucsess: %lu\n", read_sucsess);

    if (buffer[file_size]!='\0')
    {
        buffer[file_size]='\0';
    }

    printf("\n文本内容\n%s\n", buffer);

    fclose(fp);
    free(buffer);




    // int *my_array = my_malloc(100);


    // FILE *fp = fopen("debug.txt", "w+");
    // if (fp == NULL)
    // {
    //     printf("ERRor opening file!\n");
    // }
    // long size;
    // fseek(fp, 0, SEEK_END);
    // size = ftell(fp);
    // // else
    // // {
    // //     printf("File opened successfully!\n");
    // // }
    // fprintf(fp, "Hello, world!\n");
    // fputs("Hello, world!\n",fp);
    // for (size_t i = 0; i < 100; i++)
    // {
    //     fprintf(fp, "%c\n",(char)i);
    // }

    // fclose(fp);

    return 0;
}
// #include <stdio.h>
 
// int main()
// {
//    FILE *fp = NULL;
 
//    fp = fopen("/C_Project/C_Basic_exercises/src/test.txt", "w+");
//    fprintf(fp, "This is testing for fprintf...\n");
//    fputs("This is testing for fputs...\n", fp);
//    fclose(fp);
// }