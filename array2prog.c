// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>
int main()
{
    int i, val[5];
    printf("Enter 5 integars");
    for(i=0;i<5;i++)
        scanf("%d", &val[i]);
    for(i=0;i<5;i++)
        printf("%d", val[i]);
    return 0;
}