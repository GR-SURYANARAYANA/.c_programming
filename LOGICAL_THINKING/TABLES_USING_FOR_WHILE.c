//PROGRAMM TO ILLUSTRATE THE TABLES OF GIVEN NUMBER
#include<stdio.h>
int for_loop()
{
    int n,i;
   printf("\nenter the tables number ");
   scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d X %d =%d",n,i,n*i);
    }
}
int while_loop()
{
   int n,i=1;
   printf("\nenter the tables number ");
   scanf("%d",&n);
    while(i<=10)
    {
     printf("\n%d X %d =%d",n,i,n*i);
     i++;
    }
        
}
int main()
{
    printf("\n USING FOR_LOOP");
    for_loop();
    printf("\n USING WHILE LOOP");
    while_loop();
    
}
/* Output

 USING FOR_LOOP
enter the tables number >>>9

9 X 1 =9
9 X 2 =18
9 X 3 =27
9 X 4 =36
9 X 5 =45
9 X 6 =54
9 X 7 =63
9 X 8 =72
9 X 9 =81
9 X 10 =90
 USING WHILE LOOP
enter the tables number >>>10

10 X 1 =10
10 X 2 =20
10 X 3 =30
10 X 4 =40
10 X 5 =50
10 X 6 =60
10 X 7 =70
10 X 8 =80
10 X 9 =90
10 X 10 =100

Process Finished.
>>>*/