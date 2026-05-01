#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertEnd(struct Node* head, int x) {
    struct Node* newNode = createNode(x);

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

int findIntersectionValue(struct Node* head1, struct Node* head2) {
    struct Node* p1 = head1;

    while (p1 != NULL) {
        struct Node* p2 = head2;
        while (p2 != NULL) {
            if (p1->data == p2->data) {
                return p1->data;
            }
            p2 = p2->next;
        }
        p1 = p1->next;
    }

    return -1;
}

void freeList(struct Node* head) {
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int n, m, x;
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    printf("Enter number of elements in first list: ");
    scanf("%d", &n);

    printf("Enter %d elements of first list: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        head1 = insertEnd(head1, x);
    }

    printf("Enter number of elements in second list: ");
    scanf("%d", &m);

    printf("Enter %d elements of second list: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        head2 = insertEnd(head2, x);
    }

    int ans = findIntersectionValue(head1, head2);

    if (ans == -1) {
        printf("No Intersection\n");
    } else {
        printf("%d\n", ans);
    }

    freeList(head1);
    freeList(head2);

    return 0;
}