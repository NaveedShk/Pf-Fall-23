/*Take Two numbers from user and divide both numbers but do not use the division operator.*/
#include<stdio.h>
int main(){
           int div,divd;	int quo=0,rem=0;
           printf("enter the value of divisor:\n");
           scanf("%d",&div);
           printf("Enter the value of dividend:\n");
           scanf("%d",&divd);
           if (div==0){		   
		     printf("The division of a number by 0 is undefined\n");
			 		   }
               else{ 
                    quo=0,rem=0;
                  }
             while(divd>=div){
                   divd-=div;
                   quo++;
                    }
		     printf("Quotient:%d",quo);
		     printf("remainder:%d",rem);
		    		  
            }//end main