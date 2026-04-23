//Given integers a and b, compute a^b using recursion without using pow() function.
#include <stdio.h>

int Power(int a, int b) {
    if (b == 0) {
        printf("%d^0 = 1\n", a);
        return 1;
    }

    int result = a * Power(a, b - 1);

    printf("%d^%d = %d\n", a, b, result);

    return result;
}

int main() {
    int a, b;

    printf("Enter two integers a and b (a^b): ");
    scanf("%d %d", &a, &b);

    int rlt = Power(a, b);

    printf("Final Result: %d\n", rlt);

    return 0;
}