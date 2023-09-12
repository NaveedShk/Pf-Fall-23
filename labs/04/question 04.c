/*
 * Programmer:Sheikh Naveed Azeemi
 * Date: 12/9/23
 * Description: Write a program that asks user for appropiate inputs and then uses the quadratic formula to return the solutions
 */

//--included files--//
#include <stdio.h>
#include <math.h>

int main() {
int i, a, b, c; // "i" is the counter and a, b and c for quadratic formula
float d; // determinant of equation	

printf("Input value of 'a': ");
scanf("%d", &a);
printf("Input value of 'b': ");
scanf("%d", &b);
printf("Input value of 'c': ");
scanf("%d", &c); 

// calculating determinant
d = pow(b, 2) - (4 * a * c);
// identifying if determinant =, < or > 0
if (d == 0) {
printf("x = %.4f", ( -b + sqrt(d) ) / (2 * a));
} else if (d > 0) {
printf("x = %.4f and x = %.4f", ( -b + sqrt(d) ) / (2 * a), ( -b - sqrt(d) ) / (2 * a));
} else {
printf("roots are imaginary");
}

}// end main
