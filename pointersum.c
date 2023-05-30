// Allocate and assign dynamically 2D arrays([n][5]) where column size if fixed to 5 to a pointer and find sum of the elements

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,sum=0;
    int (*a)[5];
    printf("\nEnter the number of rows: ");
    scanf("%d",&n);
    a=(int(*)[5])malloc(n*5*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<5;++j){
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }

    printf("\nSum is: %d",sum);
    
    

}