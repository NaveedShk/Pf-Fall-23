/* Programmer : Sheikh Naveed Azeemi
	Roll no: 23K-0003
	Date: 31-10-2023
	Description: Write a function for finding factorial of any integer N using recursion.
*/
#include <stdio.h>
#include <stdlib.h>

long long int factorial(int A) {
  if (A == 0) {
    return 1;
  } else {
    return A * factorial(A - 1);
  }
}

int main() {
  int A;
  printf("Enter the number whose factorial you want to find: ");
  scanf("%d", &A);

  long long int factorial_of_A = factorial(A);

  printf("The factorial of %d is %lld\n", A, factorial_of_A);

  return 0;
}
