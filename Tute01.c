/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int n1,n2;
  float avg=0;
  printf("Number 1 =");
  scanf("%d",&n1);
  printf("Number 2 =");
  scanf("%d",&n2);
 avg=(n1+n2)/2.0;
 printf("Average =%.2f",avg);

  
  return 0;
}

