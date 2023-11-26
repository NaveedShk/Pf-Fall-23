/*
Programmer:Sheikh Naveed Azeemi
Roll No:23K-0003
Description: printing fibbonaci sequence with recursion
*/
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
    	//base case
        return n;
    } else {
    	//recurive case
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
