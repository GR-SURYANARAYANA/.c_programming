/*AIM:-uses and types the arithmetic operators
     and difference of usage of data type "int","float","double"*/
//code:-
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




/*OUTPUT
INTEGER
sum= 70
difference=30
multiplication=1000
division=2
reminder of division=10
FLOAT
sum= 110.699997
difference=-10.299999
multiplication=3037.100098
division=0.829752
division=0.83
division=0.8298

 DOUBLE
sum= 43.800000
difference=17.400000
multiplication=403.920000
division=2.318182
division=2.3182
division=2.31818182

Process Finished.
>>>*/