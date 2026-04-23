//Given an array of n integers, reverse the array in-place using two-pointer approach.
#include <stdio.h>

int main() {
    int n,i=0,start=0,end;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    end = n-1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;   
        end--;
    
    printf("The reversed array thus formed is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

}