#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,pos;

    printf("Enter number of elements you want in the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements: ");
    int *arr = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position: ");
    scanf("%d", &pos);
    
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    for (i = 0; i < n - 1; i++) {
        printf("%d", arr[i]);
        if (i < n - 2) printf(" ");
    }
    printf("\n");
    
    free(arr);
    return 0;
}