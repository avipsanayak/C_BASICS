//power:x^y
#include<stdio.h>
int Pow(int x,int y)
{
    int v=1;
    if(y>=1)
    {
        for(int i=1;i<=y;i++)
        {
            v*=x;
        }
    }
    return(v);
}
int main()
{
    int x,y;
    printf("Enter positive numbers x and y to calculate x^y\n");
    scanf("%d%d",&x,&y);
    if(x>=0&&y>=0) printf("The value is %d",Pow(x,y));
    else printf("Invalid Input");
}