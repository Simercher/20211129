#include <stdio.h>
#include <string.h>
#include<ctype.h>
//#include <Windows.h>

//char outbuf[1000];
int main(void)
{
    char a;
    scanf("%c", &a);
    char *aptr;
    aptr = &a;
    if(islower(*aptr))
    {
        for(int i = 0; i < 26; i++)
        {
            printf("%c\t", *aptr + i);
        }
    }else if(isupper(*aptr))
    {
        for(int i = 0; i < 26; i++)
        {
            printf("%c\t", *aptr + i);
        }
    }

    return 0;
}