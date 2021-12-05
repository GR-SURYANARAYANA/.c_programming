/*AIM:-USE OF RELATIONAL OPERTAORS
AND BASIC OF i_else_if*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of \na=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    {
    if(a==b)
    printf("\na is equal to b");
    else if(a!=b)
   printf("\na is not equal to b");
    }
    {
    if(a>b)
     printf("\na is greater than b");
    else if(a<b)
    printf("\na is lesser than b");
    }  
    {
    if(a>=b)
    printf("\na is greater than or equal to b");
    else if(a<=b)
   printf("\na is lesser than or equal to b");}
}
/*output example 1
enter the value of 
a=>>>10
b=>>>10

a is equal to b
a is greater than or equal to b

Process Finished.
>>>
output example 2'
enter the value of 
a=>>>20
b=>>>30

a is not equal to b
a is lesser than b
a is lesser than or equal to b

Process Finished.
>>>
output example 3
enter the value of 
a=>>>30
b=>>>20

a is not equal to b
a is greater than b
a is greater than or equal to b

Process Finished.
>>>*/
    