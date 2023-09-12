/*
 * Programmer: Sheikh Naveed Azeemi
 * Date: 12/9/23
 * Description: Find sum of squares of n numbers
 */

//--included files--//
#include <stdio.h>
#include <math.h>

int main() {
int n, a, num, sum; // amount of inputs, counter for sum, sum, num taken as input
sum = 0, a= 0; // initializing sum and counter
printf("Enter 'n' number of inputs:");
scanf("%d", &n);
while (a < n) {
printf("%d. Input number : ", a + 1);
scanf("%d", &num);
	sum += pow(num, 2);
	a++;
	}

printf("sum is: %d", sum);

}// end main
