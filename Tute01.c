/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int m1, m2, total; //variable declaration

  printf("Enter mark1:- "); //getting mark1
  scanf("%d",&m1); 
  
  printf("\n");

  printf("Enter mark2:- "); //getting mark2
  scanf("%d",&m2);

  printf("\n");

  total = m1 + m2; //Calculate the total

  printf("total is:- %d",total); //print the total

  return 0;
}

