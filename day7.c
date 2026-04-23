//Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.
#include <stdio.h>

int Fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("The Fibonacci number at position %d is: %d\n", n,Fibonacci(n));

    return 0;
}