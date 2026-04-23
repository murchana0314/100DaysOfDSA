//Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include <stdio.h>

int main() {
    int n,i=0,k,comparisons=0,found_index=-1;
    printf("Enter array size: ");
    scanf("%d", &n);
    
    int arr[100];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter key to search: ");
    scanf("%d", &k);
    
    for(int i = 0; i < n; i++) {
        comparisons++;
        if(arr[i] == k) {
            found_index = i;
            break;
        }
    }
    
    if(found_index != -1) {
        printf("%d was found at index %d\n", k,found_index);
    } else {
        printf("Not Found\n");
    }
    printf("Comparisons = %d\n", comparisons);
    
    return 0;
}