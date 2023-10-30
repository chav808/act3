#include <stdio.h>
//run this thru gdb again
/*
next one will be sequence of the fibs
or percent gain calc

usin gcc [-c|-S|-E] [-std=standard]

-update progress in G1 via backtesting
-CEN stuff via remote desktop
-CAP stuff rn 10.20.23 via normal desktop
-CAP stuff finished for the most part broke main.dart tho
^check old commit to fix the routing
  
 10.30.23
 -fixed allat stuff above
 -found link for CEN page to clone, get tailwind working again
 and faq + routing and other stuff to be  handled today via remote desktop
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
