/* Programmer: Sheikh Naveed Azeemi
   Date: 24/OCT/2023
  Roll No:23K-0003
  Description: Swap the no. using user-defined function.
*/
#include<stdio.h>
int swapintegers(int a, int b);//function declaration
int main( ){
	int a,b;
	printf("Enter the value of a and b: ");
	scanf("%d %d",&a,&b);
	swapintegers(a,b);
}//end main
	int swapintegers(int a ,int b) {//fucnction defined
	int temp;
	temp=b;
	b=a;
	a=temp;
	printf("The value of a is %d \nThe value of b is %d ",temp,b);

}//end swapinteger
