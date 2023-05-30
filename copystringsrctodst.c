//copying string from src to dst
#include <stdio.h>
int main()
{
    char i = 0, src[100], dst[100];
    printf("enter source string: ");
    scanf("%s", src);
    for (i = 0; i < src[i] != '\0'; ++i)
    {
        dst[i] = src[i];
    }

    dst[i] = '\0';
    printf("\n destination string : %s", dst);
    return 0;
}