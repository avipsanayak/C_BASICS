//factorial
#include <stdio.h>

int factorial(int n)
{
    if(n==1)
      return(1);
    else
      return(n*factorial(n-1));
}

int main()
{
    int a,fact;
    printf("\n Enter any number");
    scanf("%d",&a);
    fact=factorial(a);
    printf("\nfactorial value= %d",fact);
    return 0;
}