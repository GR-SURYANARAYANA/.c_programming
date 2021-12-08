// PROGRAM TO KNOW ARMSTRONG NUMBERS
#include<stdio.h>
#include<math.h>
int armstrong()
{
    int n,order=0,q,sum=0,rem,check;
    printf("enter the number ");
    scanf("%d",&n);
    q=n;check=n;
    while(n!=0)
    {
        n=n/10;
        order=order+1;
    }
    while(q!=0)
    {
        rem=q%10;
        sum=sum+pow(rem,order);
        q=q/10;
    }
    if(sum==check)
    printf("\n %d its armstrong number",sum);
    else
        printf("\n %d its not an armstrong number",sum);
}
int RANGE()
{
    int n,order=0,q,sum=0,rem,check,i,a;
    printf("RANGE FROM 0 to  ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    q=i,a=i,check=i,sum=0,order=0;
    while(a!=0)
    {
        a=a/10;
        order=order+1;
    }
    while(q!=0)
    {
        rem=q%10;
        sum=sum+pow(rem,order);
        q=q/10;
    }
     
    if(sum==check)
    {
    printf("%d ",sum);
        continue;
    }
    else
        continue;
    }
}
int main()
{
    int n;
    printf("PRESS \n 1.TO CHECK ARMSTRONG NUMBER FOR A GIVEN NUBER \n 2.TO KNOW THE ARMSTRONG NUMBER FOR A GIVEN MAX RANGE");
  printf("\nENTER THE CHOICE ");
    scanf("%d",&n);
    switch (n)
    {
        case 1:armstrong();
               break;
        case 2: RANGE(); 
               break;
        default: printf("\n INVALID RANGE");
    }
return 0;   
}


 /*Output 1
PRESS 
 1.TO CHECK ARMSTRONG NUMBER FOR A GIVEN NUBER 
 2.TO KNOW THE ARMSTRONG NUMBER FOR A GIVEN MAX RANGE
ENTER THE CHOICE >>>1
enter the number >>>1211

 19 its not an armstrong number

Process Finished.
>>> 
 Output 2
PRESS 
 1.TO CHECK ARMSTRONG NUMBER FOR A GIVEN NUBER 
 2.TO KNOW THE ARMSTRONG NUMBER FOR A GIVEN MAX RANGE
ENTER THE CHOICE >>>2
RANGE FROM 0 to  >>>1000
0 1 2 3 4 5 6 7 8 9 153 370 371 407 

Process Finished.
>>>

 Output 3
PRESS 
 1.TO CHECK ARMSTRONG NUMBER FOR A GIVEN NUBER 
 2.TO KNOW THE ARMSTRONG NUMBER FOR A GIVEN MAX RANGE
ENTER THE CHOICE >>>3

 INVALID RANGE

Process Finished.
>>>*/