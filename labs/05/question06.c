/*An online shopping store is providing discounts on the items due to the Eid. 
If the cost of items is more than 1999 it will give a discount upto 50%.
 If the cost of shopping is 2000 to 4000, a 20% discount will be applied. If the cost
 of shopping is 4001 to 6000, a 30% discount will be applied. If it's more than 6000 then 50% 
discount will be applied to the cost of shopping. 
Print the actual amount, saved amount and the amount after discount.*/
#include<stdio.h>
void main(){
             int p;
            int discount;
           int sav;
             printf("Enter the price of the item you have purchased..\n");
             scanf("%d",&p);
             if(p>1999){
                             if(p>=2000 && p<=4000){
                             discount=p*0.8;
                             printf(" RS.%d is your discount\n",discount);
                                printf("Actual Price=%d\n",p);
                                printf("Discounted price=%d\n",discount);     
                           sav=p-discount;
                                printf("saved amount=%d\n",sav);
                                         }
                            else if (p>=4001 && p<=6000){
                                  discount=p*0.7;
                                    printf("Rs.%d is your discount\n",discount);
                                  printf("Actual Price=%d\n",p);
                                   printf("Discounted price=%d\n",discount);
                                    sav=p-discount;
                                   printf("saved amount=%d\n",sav); 
                                       }
                            else {
                                  discount=p*0.5;
                                  printf("Rs.%d is your discount\n",discount);
                                     printf("Actual Price=%d\n",p);
                                     printf("Discounted price=%d\n",discount);
                                    sav=p-discount;
                                     printf("saved amount=%d\n",sav);
                          
                                       } }
             else{
                    printf("you are not eligible for discount offer. Buy items upto Rs 2000 to avail the offer");

                }
        
}//end main