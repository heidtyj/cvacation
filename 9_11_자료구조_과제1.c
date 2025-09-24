#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node *head = NULL, *tail = NULL;
    for (int i = 0; i < 4; i++) {
        int x;
        scanf("%d", &x);
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = x;
        newNode->next = NULL;
        if (head == NULL) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    for (Node* cur = head; cur != NULL; cur = cur->next)
        printf("%d ", cur->data);

    return 0;
}
