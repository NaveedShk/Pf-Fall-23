#include<stdio.h>
void main(){
       int h;
       printf("Enter the hour from 5 from 24\n");
       scanf("%d",&h);
       if(h>=5 && h<=11)
        {
        printf("Good Morning:");
        }
       else if (h>=12 && h<=18)
       {
        printf("Good Evening!!");
       }
       else{
         printf("good night!!");       
       }
       }//end main