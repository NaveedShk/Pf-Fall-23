/*
You must have seen the question before deleting anything like “Are you sure to delete [Y/y] / [N/n] ?
 Create a program that asks for this question if user enters Y or y 
it prints “Deleted successfully” if the user enters N or n it prints “Delete canceled”
 otherwise it prints choose the right option using switch statement*/

#include<stdio.h>
void main(){
        char opt;
         printf("Are you sure to delete [Y/y]/[N/n]?");
         scanf("%c",&opt);
       switch(opt){    
      case 'Y':
      case 'y':    
         printf("File has been deleted successfully ");    
          break;   
      case 'N':
      case 'n':    
         printf("Delete Cancelled");    
         break;    
    
      default:     
         printf("incorrect input!!");    
        }//end switch    
        
        }//end main