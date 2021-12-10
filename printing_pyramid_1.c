#include<stdio.h>
int pyramid(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1) )
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}

int numbering_pyramid(int n)
{
      int i,j,k=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1) )
                printf(" %2d ",k+=1);
            else
                printf("    ");
        }
        printf("\n");
    }
    return 0;
}
int reverse_pyramid(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=i && j<=(2*n)-i )
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
int numbering_reverse_pyramid(int n)
{
      int i,j,k=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-1;j++)
        {
            if(j>=i && j<=(2*n)-i )
                printf(" %2d ",k+=1);
            else
                printf("    ");
        }
        printf("\n");
    }
    return 0;
}
int right_pyramid(int n)
{
    int i,j;
    for(i=1;i<=(2*n)-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i && j<=(2*n)-i )
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
int numbering_right_pyramid(int n)
{
    int i,j,k=0;
    for(i=1;i<=(2*n)-1;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i && j<=(2*n)-i )
                 printf(" %2d ",k+=1);
            else
                printf("    ");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    printf("\n type 1:- \n");
    pyramid(n);
    printf("\n type 2:- \n");
    numbering_pyramid(n);
    printf("\n type 3:- \n");
    reverse_pyramid(n);
    printf("\n type 4:- \n");
    numbering_reverse_pyramid(n);
    printf("\n type 5:- \n");
     right_pyramid(n);
    printf("\n type 6:- \n");
    numbering_right_pyramid(n);
    return 0;
}
/* Output
enter the number of rows >>>10

 type 1:- 
                            *                            
                         *  *  *                         
                      *  *  *  *  *                      
                   *  *  *  *  *  *  *                   
                *  *  *  *  *  *  *  *  *                
             *  *  *  *  *  *  *  *  *  *  *             
          *  *  *  *  *  *  *  *  *  *  *  *  *          
       *  *  *  *  *  *  *  *  *  *  *  *  *  *  *       
    *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *    
 *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 

 type 2:- 
                                      1                                     
                                  2   3   4                                 
                              5   6   7   8   9                             
                         10  11  12  13  14  15  16                         
                     17  18  19  20  21  22  23  24  25                     
                 26  27  28  29  30  31  32  33  34  35  36                 
             37  38  39  40  41  42  43  44  45  46  47  48  49             
         50  51  52  53  54  55  56  57  58  59  60  61  62  63  64         
     65  66  67  68  69  70  71  72  73  74  75  76  77  78  79  80  81     
 82  83  84  85  86  87  88  89  90  91  92  93  94  95  96  97  98  99  100 

 type 3:- 
 *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *  *    
       *  *  *  *  *  *  *  *  *  *  *  *  *  *  *       
          *  *  *  *  *  *  *  *  *  *  *  *  *          
             *  *  *  *  *  *  *  *  *  *  *             
                *  *  *  *  *  *  *  *  *                
                   *  *  *  *  *  *  *                   
                      *  *  *  *  *                      
                         *  *  *                         
                            *                            

 type 4:- 
  1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19 
     20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36     
         37  38  39  40  41  42  43  44  45  46  47  48  49  50  51         
             52  53  54  55  56  57  58  59  60  61  62  63  64             
                 65  66  67  68  69  70  71  72  73  74  75                 
                     76  77  78  79  80  81  82  83  84                     
                         85  86  87  88  89  90  91                         
                             92  93  94  95  96                             
                                 97  98  99                                 
                                     100                                     

 type 5:- 
 *                            
 *  *                         
 *  *  *                      
 *  *  *  *                   
 *  *  *  *  *                
 *  *  *  *  *  *             
 *  *  *  *  *  *  *          
 *  *  *  *  *  *  *  *       
 *  *  *  *  *  *  *  *  *    
 *  *  *  *  *  *  *  *  *  * 
 *  *  *  *  *  *  *  *  *    
 *  *  *  *  *  *  *  *       
 *  *  *  *  *  *  *          
 *  *  *  *  *  *             
 *  *  *  *  *                
 *  *  *  *                   
 *  *  *                      
 *  *                         
 *                            

 type 6:- 
  1                                     
  2   3                                 
  4   5   6                             
  7   8   9  10                         
 11  12  13  14  15                     
 16  17  18  19  20  21                 
 22  23  24  25  26  27  28             
 29  30  31  32  33  34  35  36         
 37  38  39  40  41  42  43  44  45     
 46  47  48  49  50  51  52  53  54  55 
 56  57  58  59  60  61  62  63  64     
 65  66  67  68  69  70  71  72         
 73  74  75  76  77  78  79             
 80  81  82  83  84  85                 
 86  87  88  89  90                     
 91  92  93  94                         
 95  96  97                             
 98  99                                 
 100                                     


Process Finished.
>>>*/