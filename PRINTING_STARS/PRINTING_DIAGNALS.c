//printing diagnals for same order
#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        //printf("\n");
    {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||i==1||i==n||j==1||j==n||(j==((n-i)+1)))
                printf(" * ");
                     
            else
                printf("   ");
        }
          printf("\n");
      }
    }
    return 0;
}

/* Output
enter the number of rows >>>5
 *  *  *  *  * 
 *  *     *  * 
 *     *     * 
 *  *     *  * 
 *  *  *  *  * 


Process Finished.
>>>

 Output
enter the number of rows >>>7
 *  *  *  *  *  *  * 
 *  *           *  * 
 *     *     *     * 
 *        *        * 
 *     *     *     * 
 *  *           *  * 
 *  *  *  *  *  *  * 


Process Finished.
>>> */