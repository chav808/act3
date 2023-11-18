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
  
  10.31.23
  -finished the faq + routing stuff, pasting whatever tasks r pertinent
  -get tailwind working again
  -5 cs electives, operating sys, and 1 nat sci elective 
  -spring24' ^ cuts that to 3 cs electives and 1 sci elective
  -sum 24' ^ cuts that to 2 cs electives
  -fall24' ^ we take the last 2 and it cuts that to done 
  -
  -backtest more, n avoid fomc news trades tmmrw after open

  11.2.23
  -g1.5 in morning
  -g1 if ready by 8
  -g2 after 4(CEN css stuff)
  11.3.23
  -g1 taken care of
  
  7pm cutoff
  11.4.23
  -ALL CEN stuff
  & intro 2 ml

  11.5.23
  -CEN stuff:
  That api key stuff being hidden is whats causing this page 
  to not run after npm start

  11.17.23
  -CEN stuff:
  1. routing to the profile and about
  2. waiting on last minute changes from sum1
  3. $$$?
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
