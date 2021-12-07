//PROGRAM TO CHECK THE PALINDROME FOR A NUMBER
#include<stdio.h>
#include<string.h>
int palindrome()
{
    int n,rem,sum;   //9293
    printf("enter the number ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(sum==n)
        printf("its palindrome");
    else
        printf("its not a palindrome");
        
}
int loop_palindrome()
{
     int n,rem,sum,i,q,m;   
    printf("enter the number ");
    scanf("%d",&n);
    for(i=q;i<=n;i++)
    {
        q=i;m=i;sum=0;
        //printf("%d ",q);
        while(q!=0)
    {
        rem=q%10;
        sum=sum*10+rem;
        q=q/10;
    }
    if(sum==m)
    {
        printf("%d ",m);
        continue;
    }
        else
        continue;
    
    }
}

int main()
{
   int n;
    printf("\n NOTE:\n1->TO CHECK PALINDROME FOR A SINGLE NUMBER \n2-> TO CHECK THE NUMBER OF PALINDROME IN GIVEN RANGE ");
    printf("\nENTER WHICH ONE YOU WANT TO EXECUTE ");
    scanf("%d",&n);
    switch (n)
    {
                case 1: palindrome();
                case 2: loop_palindrome();
    }
    return 0;
}
/* OUTPUT EXAMPLE 1:-
NOTE:
1->TO CHECK PALINDROME FOR A SINGLE NUMBER 
2-> TO CHECK THE NUMBER OF PALINDROME IN GIVEN RANGE 
ENTER WHICH ONE YOU WANT TO EXECUTE >>>2
enter the number >>>13
0 1 2 3 4 5 6 7 8 9 11 

Process Finished.
>>>
OUTPUT EXAMPLE 2:-
 NOTE:
1->TO CHECK PALINDROME FOR A SINGLE NUMBER 
2-> TO CHECK THE NUMBER OF PALINDROME IN GIVEN RANGE 
ENTER WHICH ONE YOU WANT TO EXECUTE >>>1
enter the number >>>134
its not a palindromeenter the number >>>
*/