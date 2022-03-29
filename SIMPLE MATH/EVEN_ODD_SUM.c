// ILLUSTRATING EVEN AND ODD NUMBERS AND THEIR SUM
#include<stdio.h>
int main()
{
    int min,max,i,rem,sum=0,SUM=0;
    printf("\nenter the minimum value ");
    scanf("%d",&min);
    printf("\nenter the maximum value ");
    scanf("%d",&max);
    if(min<0 && max<min)
    {
        printf("\nINVALID RANGE");
    }
    printf("   EVEN NUMBERS ODD NUMBERS\n");
    for(i=min;i<=max;i++)
    {
        rem=i%2;
        if(rem==0) 
        {
            printf("      %d",i);
            sum=sum+i;
        }
        else if(rem!=0)
        {
            printf("                %d\n",i);
            SUM=SUM+i;
        }
       }
        printf("\n---------------------------");
        printf("\n      %d            %d\n",sum,SUM);
    return 0;
}

 /* Output

enter the minimum value >>>10

enter the maximum value >>>100
   EVEN NUMBERS ODD NUMBERS
      10                11
      12                13
      14                15
      16                17
      18                19
      20                21
      22                23
      24                25
      26                27
      28                29
      30                31
      32                33
      34                35
      36                37
      38                39
      40                41
      42                43
      44                45
      46                47
      48                49
      50                51
      52                53
      54                55
      56                57
      58                59
      60                61
      62                63
      64                65
      66                67
      68                69
      70                71
      72                73
      74                75
      76                77
      78                79
      80                81
      82                83
      84                85
      86                87
      88                89
      90                91
      92                93
      94                95
      96                97
      98                99
      100
---------------------------
      2530            2475


Process Finished.
>>>*/