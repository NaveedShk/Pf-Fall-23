#include<stdio.h> 
int main(){
          int a,b;
          printf("Enter first number:\n");
          scanf("%d",&a);
          printf("Enter second number:\n");
          scanf("%d",&b);
          for(;a<=b;a++){
          switch(a){
          case 1:
              printf("one,");
              break;
          case 2:
              printf("two,");
              break;
          case 3:
              printf("three,");
              break;
          case 4:
              printf("four,");
              break;
          case 5:
              printf("five,");
              break;
           case 6:
              printf("six,");
              break;
           case 7:
              printf("seven,");
              break;
          case 8:
              printf("eight,");
              break;
           case 9:
              printf("nine,");
              break; 
             }
           if (a>9){
              if(a%2==0){
                 printf("even,");}
               else{
                    printf("odd,");}
               }
          }
          }