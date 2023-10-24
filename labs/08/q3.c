/* Programmer: Sheikh Naveed Azeemi
   Date: 24/OCT/2023
  Roll No:23K-0003
  Description: Create a C program that reads a
text input from the user and searches for a specific character
*/
#include<stdio.h>
int main(){
	char str[100];
	printf("Enter string: ");
	scanf("%s",&str);
	int i,count=0;
	for(i=0;i<100;i++){
		if(str[i] == 'c') {
			count++;
			
		}
	}
    printf("%d",count);
}
