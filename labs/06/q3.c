/* Programmer:Sheikh Naveed Azeemi
   Roll No:23k-0003
   desc :Write a C Program to compute the LCM and GCD of two numbers.
   date:03-10-2023
*/
#include<stdio.h>
 int main(){
            int num1,num2,lcm=1,gcd=1,f=2;
             printf("Enter first number\n");
             scanf("%d",&num1);
             printf("Enter second number\n");
             scanf("%d",&num2);
             
            while(f<=num1 && f<=num2){
                 if(num1%f == 0 && num2%f ==0) {
                  
                 gcd=gcd*f;
                 num1=num1/f;
                 num2=num2/f;
                 f++;
             }
             } 
             lcm=num1*num2*gcd;
              printf("gcd is %d!!\n",gcd);
              printf("lcm is %d!!",lcm);
             return 0;         


}//end main