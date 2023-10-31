/* Programmer : Sheikh Naveed Azeemi
	Roll no: 23K-0003
	Date: 31-10-2023
	Description: Find the error and correct the program.
*/
#include<stdio.h>
void swap(int *a , int *b){
	int temp=*a;
  	*a=*b;
  	*b=temp;/*we were not using pointers initially that's why the program 
	  was not producing the desired result .the copy of argument is passed to the 
	  function that's why any change in parameter doesnot affect argument*/
  		}
int main(){
	int j=2,k=5;
	printf("original j=%d ,k=%d\n",j,k);
	swap(&j,&k);
	printf("Sawpped j=%d ,k=%d",j,k);
	return 0;
	}
