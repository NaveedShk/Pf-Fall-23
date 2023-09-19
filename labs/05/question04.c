/*Create a calculator asking for operator (+ or – or * or /) and
 2 operands and perform calculation according to the user input using switch statement.
*/

#include<stdio.h>
void main(){ 
          float num1;
          float num2;
          char operator;
          float add;
          float sub;
          float dvd;
          float mul;
          printf("Enter first number\n");
          scanf("%f",&num1);
          printf("Enter second number\n");
          scanf("%f",&num2);
          printf("Enter the operator(+ ,- , / , *):\n");
          scanf(" %c",&operator);

           switch(operator)
             {
           case '+':
            add=num1+num2;
           printf("Addition of numbers is %f", add);
           break;
           case '-':
            sub=num1-num2;
           printf("Subtraction of numbers is %f", sub);
           break;
           case '*':
            mul=num1*+num2;
           printf("Multiplication of numbers is %f", mul);
           break; 
           case '/':
            dvd=num1/num2;
           printf("division of numbers is %f", dvd);
           break;
           default:
           printf("incorrect operator");
            break;
        
         }//end switch
          



   }//end main