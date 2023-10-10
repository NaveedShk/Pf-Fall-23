/* Name:Sheikh Naveed Azeemi
   Roll No: 23K-0003
   Description: Take number from user and count the sum of their digits .
 */
#include<stdio.h>
int main() {
     int num,sum=0;
     printf("enter the number:\n");
     scanf("%d",&num);
     while(num>0){
       sum=sum+num%10;
       num=num/10;
      }
    printf("the sum of the digits is %d",sum);
    return 0;
   }