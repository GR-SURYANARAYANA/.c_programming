#include<stdio.h>
int TRIANGLE(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||i<=j)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
int triangle(int n)
{
      int k=0,i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||i<=j)
                printf(" %2d ",k+=1);
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ROWS ");
    scanf("%d",&n);
    printf("\nTYPE 1\n");
    TRIANGLE(n);
    printf("\nTYPE 2\n");
    triangle(n);
    return 0;
}

/* Output
ENTER THE NUMBER OF ROWS >>>4

TYPE 1
 *  *  *  * 
    *  *  * 
       *  * 
          * 

TYPE 2
  1   2   3   4 
     5   6   7 
        8   9 
          10 


Process Finished.
>>>*/