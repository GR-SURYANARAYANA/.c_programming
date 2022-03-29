//sequence of tables using for loop 
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the range of number of tables ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("table--->%d",i);
        for(j=1;j<=10;j++)
        {
           // printf("\t%d X %d =%d",i,j,i*j);
            printf("\t%d ",i*j);
        }
    printf("\n");
    }
    return 0;
}
/*output
enter the range of number of tables >>>12
table--->1	1 	2 	3 	4 	5 	6 	7 	8 	9 	10 
table--->2	2 	4 	6 	8 	10 	12 	14 	16 	18 	20 
table--->3	3 	6 	9 	12 	15 	18 	21 	24 	27 	30 
table--->4	4 	8 	12 	16 	20 	24 	28 	32 	36 	40 
table--->5	5 	10 	15 	20 	25 	30 	35 	40 	45 	50 
table--->6	6 	12 	18 	24 	30 	36 	42 	48 	54 	60 
table--->7	7 	14 	21 	28 	35 	42 	49 	56 	63 	70 
table--->8	8 	16 	24 	32 	40 	48 	56 	64 	72 	80 
table--->9	9 	18 	27 	36 	45 	54 	63 	72 	81 	90 
table--->10	10 	20 	30 	40 	50 	60 	70 	80 	90 	100 
table--->11	11 	22 	33 	44 	55 	66 	77 	88 	99 	110 
table--->12	12 	24 	36 	48 	60 	72 	84 	96 	108 	120 

Process Finished.
>>>*/