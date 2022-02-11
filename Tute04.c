/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum(int num1, int num2); //declare minimum function

int maximum(int num1, int num2); //declare maximum function

int multiply(int num1, int num2); //declare multiply function

int main() {
   int no1, no2; //declaring variables

   printf("Enter a value for no 1 : "); //getting no1
   scanf("%d", &no1);

   printf("Enter a value for no 2 : "); //getting no2
   scanf("%d", &no2);

   printf("%d ", minimum(no1, no2)); //invoke the function minimum

   printf("%d ", maximum(no1, no2)); //invoke the function maximum

   printf("%d ", multiply(no1, no2)); //invoke the function multiply


   return 0;
}

int minimum(int num1, int num2) //implementing the function minimum
{
  int min;

  if(num1 < num2)
  {
    min = num1;
  }
  else
  {
    min = num2;
  }
  return min; //return the minimum value

}

int maximum(int num1, int num2) //implementing the function maximum
{
  int max;

  if(num1 > num2)
  {
    max = num1;
  }
  else
  {
    max = num2;
  }
  return max; //return the maximum value

}

int multiply(int num1, int num2) ////implementing the function multiply
{
  int mul;

  mul = num1 * num2;

  return mul; //return the multiply value

}