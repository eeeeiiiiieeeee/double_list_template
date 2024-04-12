#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 冒泡排序
void bubbleSort(int arr[], int n) {
    int i, j,temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// 选择排序
void selectionSort(int arr[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;

    }
}

/*回调函数
*可选择多种排序算法
*/
void sort(int arr[], int size, int (*cmp)(int*, int)) {
    cmp(arr, size);
}

void testnum(int num)
{
    num=10;
}

void bubble_sort(unsigned char arr[], int len) {
    unsigned char temp;

    unsigned char *bubble_arr = (unsigned char *)malloc(len * sizeof(unsigned char));
    
    for (int i = 0; i < len; i++) {
        bubble_arr[i]=arr[i];
    }

    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - 1 - i; j++){
            if (bubble_arr[j] > bubble_arr[j + 1]) {
                temp = bubble_arr[j];
                bubble_arr[j] = bubble_arr[j + 1];
                bubble_arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%d ", bubble_arr[i]);
    }
}

int main(int argc, char const *argv[])
{

    unsigned char arr[]={1,2,3,4,5,6,7,8,9,10,3,5,19,10};

    int len=sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr, len);
    // struct tm TMP;
    // int arr[] = {1,2,3,4,5,6,7,8,9,10,3,5,19,10};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr, n, bubbleSort);
    // for (size_t i = 0; i < n;i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // char *txt="123";
    // // testnum(num);

    // int num=atoi(txt);
    // printf("num:%d\n",num);
    return 0;
}
