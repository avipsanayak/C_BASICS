//No. of digits counter
#include<stdio.h>
int nod(int n)
{
    return(n/10==0?1:1+nod(n/10));
}
int main()
{
    int n;
    printf("Enter a number to count it's digits\n");
    scanf("%d",&n);
    printf("The no. of digits is:%d",nod(n));
}