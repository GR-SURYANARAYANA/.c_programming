//printing few triangle
//NOTE:- DUE TO TWO DIGITS NUMBER THE PATTERN MAY NOT LOOK SIMILAR
#include<stdio.h>
int RIGHT_TRIANGLE(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
        //printf("\n");
    {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==j)||j<=i)
                printf(" * ");
                     
            else
                printf("   ");
        }
          printf("\n");
      }
    }
    return 0;
}
int LEFT_TRIANGLE(int n)
{
     int i,j;
    for(i=1;i<=n;i++)
        //printf("\n");
    {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==(n-i)+1)||j>=(n-i)+1)
                printf(" * ");
                     
            else
                printf("   ");
        }
          printf("\n");
      }
    }
    return 0;
}
int UPSIDE_TRINAGLE(int n)
{
         int i,j;
    for(i=1;i<=n;i++)
        //printf("\n");
    {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==(n-i)+1)||j<=(n-i)+1)
                printf(" * ");
                     
            else
                printf("   ");
        }
          printf("\n");
      }
    }
    return 0;
}

int NUMBERING_RIGHT_TRIANGLE(int n)
{
    int i,j,k=0;
    for(i=1;i<=n;i++)
        
    {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==j)||j<=i)
                printf(" %2d ",k+=1);
                     
            else
                printf("   ");
        }
          printf("\n");
      }
    }
    return 0;
}
int NUMBERING_LEFT_TRIANGLE(int n)
{
     int i,j,k=0;
    for(i=1;i<=n;i++)
       
    {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==(n-i)+1)||j>=(n-i)+1)
                printf(" %2d ",k+=1);
                     
            else
                printf("   ");
        }
          printf("\n");
      }
    }
    return 0;
}
int NUMBERING_UPSIDE_TRINAGLE(int n)
{
         int i,j,k=0;
    for(i=1;i<=n;i++)
    {
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((j==(n-i)+1)||j<=(n-i)+1)
                printf(" %2d ",k+=1);
                     
            else
                printf("   ");
        }
          printf("\n");
      }
    }
    return 0;
}

int main()
{
    int n;
     printf("enter the number of rows ");
     scanf("%d",&n);
    printf("\n    1:- \n");
    RIGHT_TRIANGLE(n);
    printf("\n    2:-\n");
    LEFT_TRIANGLE(n);
    printf("\n    3:-\n");
    UPSIDE_TRINAGLE(n);
    printf("\n    4:-\n");
    NUMBERING_RIGHT_TRIANGLE(n);
    printf("\n    5:-\n");
    NUMBERING_LEFT_TRIANGLE(n);
    printf("\n    6:-\n");
    NUMBERING_UPSIDE_TRINAGLE(n);
    return 0;
}
/* Output
enter the number of rows >>>4

    1:- 
 *          
 *  *       
 *  *  *    
 *  *  *  * 

    2:-
          * 
       *  * 
    *  *  * 
 *  *  *  * 

    3:-
 *  *  *  * 
 *  *  *    
 *  *       
 *          

    4:-
  1          
  2   3       
  4   5   6    
  7   8   9  10 

    5:-
           1 
        2   3 
     4   5   6 
  7   8   9  10 

    6:-
  1   2   3   4 
  5   6   7    
  8   9       
 10          


Process Finished.
>>>
 Output
enter the number of rows >>>7

    1:- 
 *                   
 *  *                
 *  *  *             
 *  *  *  *          
 *  *  *  *  *       
 *  *  *  *  *  *    
 *  *  *  *  *  *  * 

    2:-
                   * 
                *  * 
             *  *  * 
          *  *  *  * 
       *  *  *  *  * 
    *  *  *  *  *  * 
 *  *  *  *  *  *  * 

    3:-
 *  *  *  *  *  *  * 
 *  *  *  *  *  *    
 *  *  *  *  *       
 *  *  *  *          
 *  *  *             
 *  *                
 *                   

    4:-
  1                   
  2   3                
  4   5   6             
  7   8   9  10          
 11  12  13  14  15       
 16  17  18  19  20  21    
 22  23  24  25  26  27  28 

    5:-
                    1 
                 2   3 
              4   5   6 
           7   8   9  10 
       11  12  13  14  15 
    16  17  18  19  20  21 
 22  23  24  25  26  27  28 

    6:-
  1   2   3   4   5   6   7 
  8   9  10  11  12  13    
 14  15  16  17  18       
 19  20  21  22          
 23  24  25             
 26  27                
 28                   


Process Finished.
>>>*/