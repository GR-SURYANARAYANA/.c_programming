#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(i=1;i<=(2*n)-1;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            if((j>=n-i+1)&&j<=n+i-1)
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}

 /*Output
enter the number of rows >>>5
             *             
          *  *  *          
       *  *  *  *  *       
    *  *  *  *  *  *  *    
 *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  * 


Process Finished.
>>>*/
