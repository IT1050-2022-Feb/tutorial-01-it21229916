/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{
  int num, sum=0, count; //declaring variables
  
  printf("Enter the number:- "); //getting the number
  scanf("%d",&num);

  for(count=0; count<=num; count++) //condition to calculate the sum
  {
    sum = sum + count;
  }
  
  printf("Sum = %d",sum); //print the sum

  return 0;
}

