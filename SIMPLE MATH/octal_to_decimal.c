//PROGRAM FOR CONVERSATION OF OCTAL NUMBER INTO DECIMAL...
#include <stdio.h>

//Compiler version gcc  6.3.0

int fun()
{
  int n,rem,count=0,result=0;
  printf("enter the octal number ");
  scanf(" %d",&n);
  while(n>7)
  {
    rem=n%10;
    if(rem>0 && rem<8)
    {
      result=result+pow(8,count)*rem;
      count=count+1;
      n=n/10;
    }
    else
    {
      printf("its not a octal number");
      break;
    }
  }
  result=result+pow(8,count)*n;
  printf("result=%d",result);
  return 0;
}
int main()
{
  int i;
  for(i=0;i<100;i++)
  {
    fun();
  }
}