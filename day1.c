#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,pos,x;

    printf("No. of elements you want in the array: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    int *arr = (int*)malloc((n + 1)*sizeof(int));
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert: ");
    scanf("%d",&x);

    for(i=n; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos - 1] = x;
    n++; 

    printf("Modified array: ");
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
    
    free(arr);
    return 0;
}