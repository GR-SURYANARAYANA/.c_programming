#include <stdio.h>

//Compiler version gcc  6.3.0

int fun()
{
  int bn,count=0,rem,result=0;
  printf("enter the binary number ");
  scanf("%d",&bn);
  while(bn>1)
  {
    rem=bn%10;
    bn=bn/10;
    //printf("\n %d %d",bn,rem);
    if(rem==0||rem==1)
    {
      result=result+pow(2,count)*rem;
      count=count+1;
    }
    else
    {
      printf(" its not a binary number ");
      result=0;
      count=0;
      break;
    }
    
   }
   result=result+pow(2,count);
   printf("result=%d\n",result);
  return 0;
}
int main()
{
  int i;
  for(i=0;i<=100;i++)
  {
    fun();
  }
}