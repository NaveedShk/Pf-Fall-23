/* Programmer: Sheikh Naveed Azeemi
   Date: 24/OCT/2023
  Roll No:23K-0003
  Description:create a function called decideCarUsage that helps users decide whether they should use their car
              on a particular day of the week */
#include<stdio.h>
int decidecarusage(int num ,int day);
int main(){
	int num,day;
      printf("Enter Car Number:\n");
      scanf("%d",&num);
      printf("enter day of th week(1-7): \n");
 	  scanf("%d",&day);
 	  decidecarusage(num,day);
 }
int decidecarusage(int num,int day){
	if(num%2 == 0){
		if(day%2 ==0){
			return 1;}
		else{
			return 0;
			}
		
	}
	else{
		if(day%2 != 0){
			return 1;}
			else{
				return 0;
							}
		}
	}
	


