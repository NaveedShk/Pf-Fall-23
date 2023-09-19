/*Write a C program to input a character from the user and check whether the given 
character is a small alphabet, capital alphabet, digit or special character, using if else.*/
#include<stdio.h>
  void main(){
      char input;
       printf("Enter any alphabet ,digit or special character:\n");
       scanf("%c",&input);
         if(( input>='a'  && input<='z') || (input>='A' && input<='Z')){
             if( input>='a'  &&  input<='z' ){
                 printf("The entered input is an small alphabet!!\n");
                 }
             else
               {
                 printf("The entered input is capital alphabet!!\n");
             } 
            }
         else if(input>= '0' && input<= '9') {
                printf("the entered input is a digit!!\n");          
            }//end elseif
           else  {
                     printf("the entered input is a special character!!");
                  } 

           }//end main