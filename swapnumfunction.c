//swap no.s
#include<stdio.h>
void swap(int a,int b)
{
    printf("%d\n%d\n",b,a);
}
int main()
{
    int a,b;
    printf("Enter 2 nos to swap them\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
}