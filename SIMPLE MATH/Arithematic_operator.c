#include<stdio.h>
int integer()
{
    
    int a=50,b=20;
    printf("\nINTEGER\n");
    printf("sum= %d",a+b);
    printf("\ndifference=%d",a-b);
    printf("\nmultiplication=%d",a*b);
    printf("\ndivision=%d",a/b);
    printf("\nreminder of division=%d",a%b);
return 0;
}
float f()
{
    float a=50.2,b=60.50;
    printf("\nFLOAT\n");
    printf("sum= %f",a+b);
    printf("\ndifference=%f",a-b);
    printf("\nmultiplication=%f",a*b);
    printf("\ndivision=%f",a/b);
    printf("\ndivision=%.2f",a/b);
    printf("\ndivision=%.4f",a/b);
   
}
double dl()
{
  double a=30.6,b=13.2;
    printf("\n\n DOUBLE\n");
    printf("sum= %lf",a+b);
    printf("\ndifference=%lf",a-b);
    printf("\nmultiplication=%lf",a*b);
    printf("\ndivision=%lf",a/b);
    printf("\ndivision=%.4lf",a/b);
    printf("\ndivision=%.8lf",a/b);
  
}
int main()
{
    integer();
    f();
    dl();
}
