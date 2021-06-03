#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x1,x2;
    int E;
    printf("enter the coefficients of the equation\n");
    printf("enter the first coeff\n");
    scanf("%f",&a);
    printf("enter the second coeff\n");
    scanf("%f",&b);
    printf("enter the constant\n");
    scanf("%f",&c);
    D=(b*b-4*a*c);
    
    switch(D>0)
    {
     case 1:printf("the roots are real and distinct\n");
         x1=-b+sqrt(D)/(2*a);
         x2=-b-sqrt(D)/(2*a);
         printf("the first root is %f\n",x1);
         printf("the second root is %f\n",x2);
         break;
     case 0 :
           switch(D<0)
           {
               case 1:  printf("the roots are real and equal\n");
           
                           x1=(-b)/(2*a);
                           printf("the roots are %f=x1=x2",x1);
                                   break;
              case 0:
                       printf("the roots are imaginary");
                                break;
    }
    }
    
    return 0;
}
