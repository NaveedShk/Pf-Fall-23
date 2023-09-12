/*
 * Programmer: Sheikh Naveed Azeemi
 * Date: 12/9/23
 * Description: Write a program that asks DOB of two persons and then prints who is older.
 */

/--included files--//
#include <stdio.h>

int main() {
int dateP1, monP1, yearP1;   // birth Date,Month and Year of person1
int dateP2, monP2, yearP2;   // birth Date, month and Year of person2
int dateDif, monthDif, yearDif;  
	printf("Input DOB of person1 in format dd/mm/yyyy: ");
	scanf("%d/%d/%d", &dateP1, &monP1, &yearP1);
	printf("Input DOB of person2 in format dd/mm/yyyy: ");
	scanf("%d/%d/%d", &dateP2, &monP2, &yearP2);
	dateDif = dateP1 - dateP2;
	monthDif = monP1 - monP2;
	yearDif = yearP1 - yearP2;
if (yearDif > 0) {
	printf("person2 is older");
	return 1;		
} else if (!yearDif && monthDif > 0) {
	printf("person2 is older");
	return 1;
} else if (!yearDif && !monthDif && dateDif > 0) {
printf("person2 is older");
return 1; 
} else {
	printf("Same age");
	return 1;
	}

	printf("person1 is older");
	return 0;
}// end main