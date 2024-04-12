#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct single_list {
    int data;
    struct single_list *next;
}list;

// 创建链表
// list list_node;

// 创建链表节点
list *create_list(int data) {

    list *node = (list *)malloc(sizeof(list));

    if (node == NULL)
    {
        printf("malloc failed\n");
        exit(1);
    }
    /*malloc申请的内存不是干净的，需要初始化*/
    memset(node, 0, sizeof(list));

    node->data = data;
    node->next = NULL;

    return node;
}

// 尾插
void insert_tail(list*head, list *node) {
    /*新建一个指针变量，避免修改头节点*/
    list * p=head;
    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = node;
}

/*遍历链表*/
void print_list(list *head) {
    list *p = head;
    while (p->next != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d ", p->data);
    printf("\n");
}

/*删除节点*/
int delete_list_node(list *head,int data) {
    list *p = head;
    list *lastp=NULL;
    while (p->next != NULL)
    {
        lastp = p;
        p = p->next;
        if (p->data == data)
        {
            if (p->next != NULL)
            {
                lastp->next = p->next;
            }
            else
            {
                lastp->next = NULL;
            }
            free(p);
            return 0;
        }
    }
    printf("没有可删除的节点\n");
    return -1;
}

/*链表反转*/
void reverse_list(list *head) {
    
}


int main() {

    list *head = create_list(0);
    // printf("%d\n", head->data);
    for (size_t i = 1; i < 10; i++)
    {
        insert_tail(head, create_list(i));
    }
    print_list(head);

    delete_list_node(head,6);

    print_list(head);

    return 0;
}