//printing natural numbers to given range using different loops 
#include<stdio.h>
int for_loop()
{
    int n,i;
    printf("enter the range of the numbers to print ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d",i);
    }
}
int while_loop()
{
    int n,i=1;
    printf("enter the range of the number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\t%d",i);
        i++;
    }
}
int main()
{
    printf("EXECUTING USING FOR LOOP\n");
    for_loop();
    printf("EXECUTING USING WHILE LOOP\n");
    while_loop();
    return 0;
}
/*output:-
    EXECUTING USING FOR LOOP
enter the range of the numbers to print >>>20

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20EXECUTING USING WHILE LOOP
enter the range of the number >>>10
	1	2	3	4	5	6	7	8	9	10

Process Finished.
>>>*/