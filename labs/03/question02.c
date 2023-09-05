#include<stdio.h>
#include<math.h>
int main(){
int H;
int B;
int P;
printf("Enter the length of the base: ");
scanf("%d",&B);
printf("Enter the length of the perpendicular: ");
scanf("%d",&P);
printf("the length of the hypotenuse is %f",sqrt((P*P)+(B*B)));
return 0;
}