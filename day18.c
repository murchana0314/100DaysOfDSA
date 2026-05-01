#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter the number of positions to rotate to the right (k): ");
    scanf("%d", &k);

    k = k % n;
    if (k < 0) {
        k += n;
    }

    int rotated[100];

    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    for (int i = 0; i < n - k; i++) {
        rotated[k + i] = arr[i];
    }

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}