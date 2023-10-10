/* name: sheikh Naveed Azeemi
   roll no: 23K-0003
   description : Q4
*/
 #include<stdio.h>
int main(){
          int matrix[2][2],i=0,j;
          printf("Enter the elements of the matrix\n");
          while(i<2){
          j=0;
            while(j<2){
                 scanf("%d",&matrix[i][j]);
                  ++j;
}
             ++i;
}
        
          for(i=0;i<2;i++){
       
          for(j=0;j<2;j++){
             if(matrix[i][j] != matrix[j][i])
            {  printf("The matrix is not symmetric with given array");
              return 0;
} 
                         }
           }
                      printf("the matrix is symmetric with given array");
       return 0;







}