/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int subject1, subject2;
  float average;
  
  printf("Enter marks 01 : ");
  scanf("%d", &subject1);

  printf("Enter marks 02 : ");
  scanf("%d", &subject2);

  average = (subject1 + subject2) / 2.00;
  printf("Average is : %.2f", average);
  
  return 0;
  
}

