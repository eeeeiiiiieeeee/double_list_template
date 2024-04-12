#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct double_list_node {
    int data;
    char str[27];
    struct double_list_node *prev;
    struct double_list_node *next;

}dlist;

/*创建双向链表节点*/
dlist *create_node(int data)
{
    dlist *node = (dlist *)malloc(sizeof(dlist));
    if (node == NULL)
    {
        printf("malloc error\n");
        exit(1);
    }
    memset(node, 0, sizeof(dlist));

    node->data = data;
    node->prev = NULL;
    node->next = NULL;

    return node;
}

/*尾插链表*/
void insert_tail(dlist *head, dlist *node)
{
    dlist *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = node;
    node->prev = p;
}

/*正向遍历链表*/
void traverse(dlist *head)
{
    dlist *p = head;
    while (p!= NULL) {
        // p = p->next;
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

/*反向遍历链表*/
void reverse_traverse(dlist *head)
{
    dlist *p = head->next;

    while (p->next!= NULL) {
        p=p->next;
    }
    while (p!= NULL) {
         printf("%d ", p->data);
         p = p->prev;
    }
    printf("遍历完成\n");
}

/*删除双向链表节点*/
void delete_node(dlist *node,int data)
{
    dlist *p = node;
    while (p!= NULL) {
        if (p->data == data) {
            p->prev->next = p->next;
            p->next->prev = p->prev;
            free(p);
            break;
        }
        p = p->next;
    }
}

/*释放双向链表*/
//通过二级指针，在free链表之后，再将指向头结点的指针指向空地址
void free_list(dlist **head)
{
    dlist *p = *head;
    while (p!= NULL) {
        *head = p->next;
        free(p);
        p = *head;
    }
    *head = NULL;
}



int main()
{   //链表节头
    dlist *list=create_node(0);

    //尾插法创建链表
    for (size_t i = 1; i < 10; i++)
    {
        insert_tail(list, create_node(i));
    }

    // printf("一节链表大小：%dByte\n", (int)sizeof(dlist));
    //正向遍历链表
    traverse(list);
    //反向遍历链表
    reverse_traverse(list);

    //删除双向链表节点
    delete_node(list, 5);
    traverse(list);
    reverse_traverse(list);

    // 释放双向链表
    free_list(&list);

    traverse(list);

    return 0;
}