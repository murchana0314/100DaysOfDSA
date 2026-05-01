#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int a[100][100];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int isIdentity = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && a[i][j] != 1) {
                isIdentity = 0;
            }
            if (i != j && a[i][j] != 0) {
                isIdentity = 0;
            }
        }
    }

    if (isIdentity == 1) {
        printf("Identity Matrix\n");
    } else {
        printf("Not an Identity Matrix\n");
    }

    return 0;
}