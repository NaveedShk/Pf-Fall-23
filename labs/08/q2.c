/* Programmer: Sheikh Naveed Azeemi
   Date: 24/OCT/2023
  Roll No:23K-0003
  Description: Perform Basic Mathematical operations using user-defined function.
*/
#include<stdio.h>
int operations(int a , int b, char c);//function declaration
int main(){
	int a ,b; char c;
	printf("Enter the value of first number:\n");
	scanf("%d",&a);
	printf("Enter the value of second number:\n");
	scanf("%d",&b);
	printf("Enter the operator +,-,/,*\n ");
	scanf(" %c",&c);
	operations(a,b,c);
}//end main
int operations(int a,int b, char c){//function defined
	switch(c){
	case'+':
	 	printf("addition of entered numbers is %d",(a+b));
	 	break;
	case'-':
		printf("Subtraction of entered numbers is %d",(a-b));
		break;
	case'/':
		printf("Division of Entered numbers is %d",(a/b));
		break;
	case'*':
	    printf("Product of Entered numbers is %d",(a*b));
		break;
			
	}//end switch
}//end operations
