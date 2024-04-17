//
// Created by Ignorant on 2023/12/12.
//

#include <stdlib.h>
#include <stdio.h>

struct Node {
    int content;
    struct Node *next;
};

// 初始化
struct Node* Creat();
// 在中间插入
void Insert(int index, struct Node *head);
// 删除一个节点
struct Node* Remove(int index, struct Node *head);
// 查找
int Search(int target, struct Node *head);
// 输出
void Output(struct Node *head);
// 删除
void Delete(struct Node *head);
int main() {
    struct Node *head = Creat();
    Output(head);
    Insert(5, head);
    Output(head);
    head = Remove(0, head);
    Output(head);
    Remove(5, head);
    Output(head);
    printf("%d %d\n", Search(5, head), Search(9, head));
    // 排序
    Delete(head);
    return 0;
}

struct Node* Creat() {
    struct Node *head = NULL;
    struct Node *tail = malloc(sizeof(struct Node));
    scanf("%d", &tail->content);
    head = tail;
    tail->next = NULL;
    // 从头部插入
    while (head->content != -1) {
        struct Node *temp = malloc(sizeof(struct Node));
        scanf("%d", &temp->content);
        temp->next = head;
        head = temp;
    }
    // 在最后插入
    struct Node *temp = malloc(sizeof(struct Node));
    temp->content = 10;
    tail->next = temp;
    tail = temp;
    tail->next = NULL;
    return head;
}

void Insert(int index, struct Node *head) {
    struct Node *temp = head;
    int i = 0;
    for (; i != index && temp->next != NULL; temp = temp->next, i++);
    if (i == index) {
        struct Node *add = malloc(sizeof(struct Node));
        scanf("%d", &add->content);
        add->next = temp->next;
        temp->next = add;
    } else {
        printf("The %d node does not exist.\n", index);
    }
}

struct Node* Remove(int index, struct Node *head) {
    struct Node *temp1 = head;
    if (index == 0) {
        head = head->next;
        free(temp1);
        return head;
    }
    int i = 0;
    for (; i != index - 1 && temp1->next != NULL; temp1 = temp1->next, i++);
    if (i == index - 1) {
        struct Node *temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    } else {
        printf("The %d node does not exist.\n", index);
    }
    return head;
}

int Search(int target, struct Node *head) {
    int index = 0;
    struct Node *temp = head;
    for (; temp != NULL; temp = temp->next, index++) {
        if (temp->content == target) {
            break;
        }
    }
    if (temp == NULL) {
        return -1;
    }
    return index;
}

void Output(struct Node *head) {
    for (struct Node *p = head; p != NULL; p = p->next) {
        printf("%d ", p->content);
    }
    printf("\n");
}

void Delete(struct Node *head) {
    while (head) {
        struct Node *current = head;
        head = head->next;
        free(current);
    }
}
