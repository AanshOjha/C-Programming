#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() 
{
  float principal, rate, time, si, ci;

  printf("Enter principal: ");
  scanf("%f", &principal);
  printf("Enter rate of interest: ");
  scanf("%f", &rate);
  printf("Enter time in years: ");
  scanf("%f", &time);

  si = (principal*rate*time)/100;
  ci = (principal*pow(1 + (rate/100), time)) - principal;

  printf("Simple interest: %.2f\n", si);
  printf("Compound interest: %.2f\n", ci);
}