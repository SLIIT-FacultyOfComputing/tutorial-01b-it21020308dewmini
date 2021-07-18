/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int n,amu=0,i;

  printf("Enter number :");
  scanf("%d",&n);
  
  amu=n;

  while(n>1)
  {
    amu +=(n-1);
    n--;
  }

  printf("Sum =%d",amu);
  return 0;
}

