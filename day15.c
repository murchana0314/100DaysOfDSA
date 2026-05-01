#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);

    int a[100][100];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    int diagSize = (m < n) ? m : n;

    printf("Diagonal elements: ");
    for (int i = 0; i < diagSize; i++) {
        printf("%d ", a[i][i]);
        sum += a[i][i];
    }
    printf("\nSum of primary diagonal: %d\n", sum);

    return 0;
}