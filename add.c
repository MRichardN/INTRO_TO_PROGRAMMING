// program to add two numbers from the user
#include<stdio.h>  //printf(), scanf()
 int main ()
{

  float x;
  float y;
  double sum;
  // int x,y,sum;
  
  printf("Enter the first number:\t");
  scanf("%f", &x);

  printf("Enter the second  number:");
  scanf("%f",&y);

  sum = x + y;
  printf("The sum of X and Y is %f", sum);



  return 0;
}s