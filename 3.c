#include <stdio.h>
#include <string.h>
#include<ctype.h>
//#include <Windows.h>

//char outbuf[1000];
int main(void)
{
    char str[9999];
    scanf("%[^\n]", str);
    char *strptr;
    strptr = str;
    for(int i = strlen(str) - 1; i >= 0; i--)
    {
        //printf("%d", i);
        printf("%c", strptr[i]);
    }
    puts("");

    return 0;
}