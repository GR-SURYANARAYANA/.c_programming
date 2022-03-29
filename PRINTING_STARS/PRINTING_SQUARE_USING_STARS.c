#include<stdio.h>
int SQUARE(int i,int j,int n)
{
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        printf(" * ");
        }
        printf("\n");
        
    }
 return 0;
}
int HOLLOW_SQUARE(int i,int j,int n)
{
    printf("\n");
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==1&&j>=1)||(i==n&&j>=1)||j==1||j==n)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
     int i,j,n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    SQUARE(i,j,n);
    HOLLOW_SQUARE(i,j,n);
     
    return 0;
}

/*Output
enter the number of rows >>>10

 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *  * 

 *  *  *  *  *  *  *  *  *  * 
 *                          * 
 *                          * 
 *                          * 
 *                          * 
 *                          * 
 *                          * 
 *                          * 
 *                          * 
 *  *  *  *  *  *  *  *  *  * 


Process Finished.
>>>*/