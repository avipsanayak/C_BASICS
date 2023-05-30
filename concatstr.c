// concatenating strings
#include <stdio.h>
int length(char *s)
{
    int k = -1;
    while (s[++k])
        ;
    return k;
}

int main()
{
    char s1[100], s2[100];
    int i, j;
    printf("Enter first string : ");
    gets(s1);
    printf("\nEnter second string : ");
    scanf("%s", s2);

    i = 0;
    j = length(s1);

    while (s1[j++] = s2[i++])
        ;

    printf("After concatenation : %s", s1);
    return 0;
}