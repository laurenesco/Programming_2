//
//  Program Name:     MyProblem3.c
//  Last Modified:    07/01/22
//  Modified By:      Lauren Escobedo
//  Program Desc.:    Contents of review problem 4.
//

#include <stdio.h>

int add(int n);
int mult(int n);

int main()  {
  int n, prod, sum;

  printf("n? ");
  scanf("%d", &n);

  sum = add(n);
  prod = mult(n);

  printf("\nSum     = %d"
         "\nProduct = %d",
         sum, prod);

  return 0;
}

int add(int n)  {
  int sum = 0;
  for(int i=1;i<=n;i++) {
    sum += i;
  }
  return sum;
}

int mult(int n)  {
  int prod = 1;
  for(int i=1;i<=n;i++) {
    prod *= i;
  }
  return prod;
}
