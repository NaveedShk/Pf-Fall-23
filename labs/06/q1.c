/* 
*Programmer:Sheikh Naveed Azeemi
*desc:Write a C Program that takes any number from the user and identifies if the number is a
      perfect number or not.
*date:03-10-2023  
*/

#include<stdio.h>
int main(){
     int n,i=1 ,j=0;
     printf("Enter the number:\n");
     scanf("%d",&n);
    


     while(i<n)
       {
     if(n%i==0){ 
        j=j+i;
       }       
         i++;
       }//end while
      if(j==n)
      {
       printf("the number is a perfect number!!"); 
}
   else {
      printf("the number is not a perfect number!!");
}
}//end main