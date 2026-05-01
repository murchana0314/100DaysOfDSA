#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create a new node with given data
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert at end (to build the list in order from input)
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

// Merge two sorted linked lists
struct Node* mergeSortedLists(struct Node* la, struct Node* lb) {
    struct Node* dummy = createNode(-1);
    struct Node* curr = dummy;

    while (la != NULL && lb != NULL) {
        if (la->data <= lb->data) {
            curr->next = la;
            la = la->next;
        } else {
            curr->next = lb;
            lb = lb->next;
        }
        curr = curr->next;
    }

    if (la != NULL) {
        curr->next = la;
    } else {
        curr->next = lb;
    }

    struct Node* result = dummy->next;
    free(dummy);
    return result;
}

// Print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int n, m;
    struct Node* la = NULL;
    struct Node* lb = NULL;

    printf("Enter size of first list: ");
    scanf("%d", &n);

    printf("Enter first list (sorted) elements: ");
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        la = insertAtEnd(la, x);
    }

    printf("Enter size of second list: ");
    scanf("%d", &m);

    printf("Enter second list (sorted) elements: ");
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        lb = insertAtEnd(lb, x);
    }

    struct Node* merged = mergeSortedLists(la, lb);
    printList(merged);

    return 0;
}