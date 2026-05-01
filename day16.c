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

    int printed[100] = {0};

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        if (printed[i]) continue;  

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                printed[j] = 1;  
            }
        }

        printf("%d:%d ", arr[i], count);
    }
    printf("\n");

    return 0;
}