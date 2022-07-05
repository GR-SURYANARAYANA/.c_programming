//convert octal-number system to binary number system
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
        case 0: printf("000");break;
        case 1: printf("001");break;
        case 2: printf("010");break;
        case 3: printf("011");break;
        case 4: printf("100");break;
        case 5: printf("101");break;
        case 6: printf("110");break;
        case 7: printf("111");break;
     }
     value=value/10;
     
 }
 return 0;
}
/* OUTPUT
PS C:\Users\Admin\Desktop> cd "c:\Users\Admin\Desktop\" ; if ($?) { gcc Untitled-1.c -o Untitled-1 } ; if ($?) { .\Untitled-1 }
enter the number 635465
110011101100110101
PS C:\Users\Admin\Desktop> cd "c:\Users\Admin\Desktop\" ; if ($?) { gcc Untitled-1.c -o Untitled-1 } ; if ($?) { .\Untitled-1 }
enter the number 26354
010110011101100
PS C:\Users\Admin\Desktop> cd "c:\Users\Admin\Desktop\" ; if ($?) { gcc Untitled-1.c -o Untitled-1 } ; if ($?) { .\Untitled-1 }
enter the number 2784  
010111100
PS C:\Users\Admin\Desktop> cd "c:\Users\Admin\Desktop\" ; if ($?) { gcc Untitled-1.c -o Untitled-1 } ; if ($?) { .\Untitled-1 }
enter the number 234
010011100*/
