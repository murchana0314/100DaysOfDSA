#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns (m n): ");
    scanf("%d %d", &m, &n);

    int mat[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int is_symmetric = 1;

    if (m != n) {
        is_symmetric = 0;
    } else {
        for (int i = 0; i < m && is_symmetric; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != mat[j][i]) {
                    is_symmetric = 0;
                    break;
                }
            }
        }
    }

    if (is_symmetric) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Not a Symmetric Matrix\n");
    }

    return 0;
}