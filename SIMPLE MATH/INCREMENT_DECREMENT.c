//AIM:-TO KNOW INCREMENT AND DECREMENT,TYPES OF INCREMENTS AND DECREMENTS AND THEIR USES
//NOTE:-OBSERVE THE VALUE OF a and tthe value of i
#include<stdio.h>
int increment_decrement()
{
    int a=20,i;
    printf("\nincrement=%d",a++);
    a=20;
    printf("\ndecrement=%d",a--);    
}
int types_of_increment()
{
    int a=50,i;
    i=a++;
    printf("\npost increment=%d",i);
    printf("\nvalue of a=%d",a);
    i=0;
    i=++a;
    printf("\npre increment=%d",i);
    printf("\nvalue of a=%d",a);
}
int types_of_decrement()
{
    int a=50,i;
    i=a++;
    printf("\npost decrement=%d",i);
    printf("\nvalue of a=%d",a);
    i=0;
    i=++a;
    printf("\npre decrement=%d",i);
    printf("\nvalue of a=%d",a);
}
int main()
{
    printf("\nINCREMENT AND DECREMENT OF A GIVEN VALUE\n");
    increment_decrement();
    printf("\nTYPES OF INCREMENT\n");
    types_of_increment();
    printf("\nTYPES OF DECREMENT\n");
    types_of_decrement();
    return 0;
}


 /*Output

INCREMENT AND DECREMENT OF A GIVEN VALUE

increment=20
decrement=20
TYPES OF INCREMENT

post increment=50
value of a=51
pre increment=52
value of a=52
TYPES OF DECREMENT

post decrement=50
value of a=51
pre decrement=52
value of a=52

Process Finished.
>>>*/

