//Reverse Array*/
#include <stdio.h>

int main()
{
    int arr[10];
    int a[10];
    printf("Enter elements of array");
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);
    for(int i=9;i>=0;i--)
    a[i]=arr[9-i];
    printf("\n");
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}