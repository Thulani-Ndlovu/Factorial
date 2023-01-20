#include <stdio.h>

int fact(int num);
int main(void)
{
  int number =6;
   int factorial=fact(number);
   printf("%d! is equal to %d\n",number,factorial);
    return 0;
}

int fact(int num)
{

  if(num==0 || num==1)
  {
    return 1;
  }
 else
    {return num*fact(num-1);};
  
}