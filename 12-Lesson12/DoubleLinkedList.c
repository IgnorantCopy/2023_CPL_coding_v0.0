//
// Created by Ignorant on 2023/12/19.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int content;
    struct Node *last;
    struct Node *next;
};

// 初始化
struct Node* Creat();
// 输出
void Output(struct Node *head);
// 删除
void Delete(struct Node *head);
// 反转
struct Node* Reverse(struct Node *head);
// 排序
void Sort(struct Node *head);
// 压缩
void Compress(struct Node *head);
int main() {
    struct Node *head = Creat();
    Output(head);
    head = Reverse(head);
    Output(head);
    Sort(head);
    Output(head);
    Compress(head);
    Output(head);
    Delete(head);
    return 0;
}
struct Node* Creat() {
    struct Node *head = malloc(sizeof(struct Node));
    scanf("%d", &head->content);
    head->next = NULL;
    head->last = NULL;
    // 从头部插入
    while (head->content != -1) {
        struct Node *temp = malloc(sizeof(struct Node));
        scanf("%d", &temp->content);
        temp->next = head;
        temp->last = NULL;
        head->last = temp;
        head = temp;
    }
    struct Node *temp = head;
    head = head->next;
    head->last = NULL;
    free(temp);
    return head;
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

struct Node* Reverse(struct Node *head) {
    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
        current->last->next = current->last->last;
        current->last->last = current;
    }
    current->next = current->last;
    current->last = NULL;
    return current;
}

void Sort(struct Node *head) {
    struct Node *p1 = head;
    while (p1->next != NULL) {
        p1 = p1->next;
    }
    for (; p1->last != NULL; p1 = p1->last) {
        for (struct Node *p2 = head; p2 != p1 && p2->next != NULL; p2 = p2->next) {
            if (p2->content > p2->next->content) {
                int temp = p2->content;
                p2->content = p2->next->content;
                p2->next->content = temp;
            }
        }
    }
}

void Compress(struct Node *head) {
    struct Node *current = head;
    while (current->next != NULL) {
        if (current->content == current->next->content) {
            struct Node *temp = current->next;
            current->next = temp->next;
            temp->next->last = current;
            free(temp);
        } else {
            current = current->next;
        }
    }
}
