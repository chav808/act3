#include <stdio.h>
//run this thru gdb again
/*
next one will be sequence of the fibs
or percent gain calc

usin gcc [-c|-S|-E] [-std=standard]

-update progress in G1 via backtesting
-CEN stuff via remote desktop
-CAP stuff rn 10.20.23 via normal desktop
  */
int main()
{
  int num;
  do {
    printf("Enter a positive integer: ");
    scanf("%d", &num);
  } while(num < 0);

  int factorial = 1;
  for(int i=1; i<=num; i++)
    factorial = factorial*i;

  printf("%d! = %d\n", num, factorial);

  return 0;
}
