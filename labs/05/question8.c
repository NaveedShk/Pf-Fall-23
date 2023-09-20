/*An android developer wants to design a mobile feature to control the brightness of the mobile phone according to the surrounding
 light. In order to do it he uses an ambient light sensor (for the detection of surrounding light) which is commonly built in in all latest 
android phones. It gives the value of light intensity in integers. Write a C program for Light sensor value ranges from 0-1000, if it's 
exposed under sunshine (>500), if it's evening then (0 ~ 100), lighting (100 to 500).*/

#include <stdio.h>

void main() {
    int intensity;

    printf("Enter the light intensity value from 0-1000:\n ");
    scanf("%d", &intensity);

    if (intensity > 500 && intensity<=1000) {
        printf("Setting brightness to maximum.\n");
    } 
    else if (intensity >= 100 && intensity <= 500) {
               printf("Setting brightness to medium.\n");
    } 
    else if (intensity >= 0 && intensity < 100) {
               printf("Setting brightness to minimum.\n");
    } 
    else {
               printf("Invalid value. Re-enter a value between 0 and 1000.\n");
    }

  
}//end main
 





