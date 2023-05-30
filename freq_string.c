//WAP for frequency of a character in a string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100],ch;
    int i=0,count=0;

    printf("Enter a String:\n");
    gets(string);

    printf("Enter the Character for which you want the Frequency\n");
    ch = getchar();

    while(string[i])
    {
        if(ch==string[i++])
        ++count;
    }
    printf("The Frequency of '%c' in the String\n~%s~\nis=%d\n",ch,string,count);
    
    return 0;
}