#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = createNode(value);
    if (head == NULL) return newNode;

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

struct Node* deleteFirstOccurrence(struct Node* head, int key) {
    struct Node* current = head;
    struct Node* prev = NULL;

    if (current != NULL && current->data == key) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        return head;
    }

    prev->next = current->next;
    free(current);
    return head;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int n, key;
    struct Node* head = NULL;

    printf("Enter size of the list: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        head = insertAtEnd(head, x);
    }

    printf("Enter key to delete (first occurrence): ");
    scanf("%d", &key);

    head = deleteFirstOccurrence(head, key);
    printList(head);

    return 0;
}