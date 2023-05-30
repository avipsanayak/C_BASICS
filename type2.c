//type2
#include <stdio.h>

void add (int n1,int n2)
{
    int n3;
    n3=n1+n2;
    printf("sum is %d ",n3);
}
void main()
{
    int a, b, c;
    printf("enter 2 number : ");
    scanf("%d %d",&a,&b);
    add(a,b);
}