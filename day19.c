#include <stdio.h>
#include <stdlib.h>   // add this line

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a = arr[0], b = arr[1];
    int minDiff = abs(arr[0] + arr[1]);  // now abs is properly declared

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < minDiff) {
                minDiff = abs(sum);
                a = arr[i];
                b = arr[j];
            }
        }
    }

    printf("Pair with sum closest to zero: %d %d\n", a, b);

    return 0;
}