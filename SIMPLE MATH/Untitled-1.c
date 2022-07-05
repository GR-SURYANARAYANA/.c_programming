#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,count=0,value=0,rem1;
    printf("enter the number ");
    scanf("%d",&n);
    //reversing a number
    while(n!=0)
    {
        rem=n%10;
        value=rem+value*10;
        n=n/10;
        //printf("\n %d ",rem);
        //printf("%d",value);
        count++;
    }
 //individually printing digits ino character using switch
 while(value!=0)
 {
     rem1=value%10;
     switch(rem1)
     {
        case 1: printf(" one ");break;
        case 2: printf(" two ");break;
        case 3: printf(" three ");break;
        case 4: printf(" four  ");break;
        case 5: printf(" five  ");break;
        case 6: printf(" six  ");break;
        case 7: printf(" seven  ");break;
        case 8: printf(" eight  ");break;
        case 9: printf(" nine  ");break;
        case 0: printf(" zero  ");break;


     }
     value=value/10;
     
 }
 return 0;
}
/* ouput
PS C:\Users\Admin> cd "c:\Users\Admin\Desktop\" ; if ($?) { gcc Untitled-1.c -o Untitled-1 } ; if ($?) { .\Untitled-1 }
enter the number 12345
 one  two  three  four   five  
PS C:\Users\Admin\Desktop> cd "c:\Users\Admin\Desktop\" ; if ($?) { gcc Untitled-1.c -o Untitled-1 } ; if ($?) { .\Untitled-1 }
enter the number 14235
 one  four   two  three  five  
PS C:\Users\Admin\Desktop>     
*/