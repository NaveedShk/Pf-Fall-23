/*Write a C program to find all roots of a quadratic equation, it is required to take user input for 
a, b and c values. Find discriminant using formula
discriminant=b ×b-(4×a×c)
Compute roots based on the nature of discriminant.*/
#include<stdio.h>
#include<math.h>
  void main(){
                      double a , b, c ,r1,dsc , r2;
                       printf("Enter the value of a: \n");
                       scanf("%lf",&a);
                        printf("Enter the value of b: \n");
                       scanf("%lf",&b);
                       printf("Enter the value of c:\n");
                       scanf("%lf",&c);
                       dsc=b*b-(4*a*c);
                        if (dsc==0)  
                             {
                                  r1 = -b / (2 * a);
                                    printf("Roots are real and repeated:\n");
                                    printf("root1 = root2 = %.2lf\n", r1);
                       }
                        else if(dsc>0) {
                           r1 = (-b - sqrt(dsc)) / (2 * a);
                          r2 = (-b + sqrt(dsc)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", r1);
        printf("Root 2 = %.2lf\n", r2); 
             }
            else {
                                                    printf("Roots are complex:\n");
                            
    }
                                  
}//end main