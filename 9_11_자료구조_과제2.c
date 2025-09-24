#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node *head = NULL, *tail = NULL;
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = x;
        newNode->next = NULL;

        if (head == NULL) head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    printf("\n평균: %.2f\n", sum / 4.0);
    return 0;
}
