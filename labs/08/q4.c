/* Programmer: Sheikh Naveed Azeemi
   Date: 24/OCT/2023
  Roll No:23K-0003
  Description:performs password length
validation and user authentication based on the given requirements 
*/
#include<stdio.h>
#include<string.h>

int main(){
	char password[50];
	char store_password[]="secure123";
	
	printf("Enter the password: ");
	scanf("%s", password);
	
	if(strlen(password) < 8){
		printf("Password must be atleast 8 character long. \n");
		return 0;
		}
		if(strcmp(password, store_password) == 0){
        printf("login succesful. Welcome!\n");
        		}
        else{
        	printf("login failed.incorrect password \n");
		}
		return 0;
}
