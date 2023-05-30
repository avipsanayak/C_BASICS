//combination_nCr.c
#include<stdio.h>
int fact(int n)
{
    int f=1;
    if(n!=0)
    {
    for(int i=2;i<=n;i++)
    f*=i;
    }
    return(f);
}
int main()
{
    int n,r;
    printf("Enter n and then r for calculating combination nCr\n");
    scanf("%d%d",&n,&r);
    if(n>r)
    printf("%f",(float)fact(n)/(fact(r)*fact(n-r)));
}