//marks of student
#include<stdio.h>
int main()
{
    int a[10],i,s=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the marks of student no:%d\n",i+1);
        scanf("%d",&a[i]);
        s+=a[i];
    }
    printf("The average marks is %f",s/10.0);
}