/* Programmer:Sheikh Naveed Azeemi
   Roll No: 23K-0003
   desc:Write a program that will generate the Fibonacci series up to 10000. Also find the sum of the
        generated Fibonacci numbers divisible by 3, 5 or 7 only.
   Date:03-10-2023
 
 */


#include<stdio.h>
 int main(){
            int b=1,c=1,sum=0,nextnum;
            printf("Fibonacci series upto 10000 is :\n");
            printf("%d,%d",b,c);
                 for(nextnum=b+c;nextnum<10000;){
              
             nextnum=b+c;
                  if(nextnum>10000){
               break; 
                }
              b=c;
             c=nextnum;
              printf("%d,",nextnum);

                     
                          if(nextnum%3==0 || nextnum%5==0 || nextnum%7==0){
                                 sum+=nextnum;
                
                                 } }
             printf("sum of numbers divisible by 3,5,7 are: %d",sum);
     
                  } 