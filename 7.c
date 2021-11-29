#include <stdio.h>
#include <string.h>
//#include <Windows.h>

//char outbuf[1000];
int main(void)
{
    char str[99990];
    char trs_str[] = "zxcvbnm,./asdfghjkl;'qwertyuiop[]\\1234567890-=";
    char abc[] =     "cvbnm,./zxdfghjkl;'asertyuiop[]\\qw34567890-=12";
    char ABC[] =     "CVBNM<>?ZXDFGHJKL:\"ASERTYUIOP{}|QW#$\%^&*()_+!@";
    char trs_abc[] = "zxcvbnm<>?asdfghjkl:\"qwertyuiop{}|!@#$\%^&*()_+";
    // scanf("%[^\0]", str);
    // //;
    while (gets(str))//while(c = getchar())
    {
        for(int i = 0; i < strlen(str); i++)
        {
            //printf("%d", i);
            for(int j = 0; j < strlen(trs_str); j++)
            {
                if(str[i] == abc[j])
                {
                    printf("%c", trs_str[j]);
                    break;
                }
            }
            for(int j = 0; j < strlen(ABC); j++)
            {
                if(str[i] == ABC[j])
                {
                    printf("%c", trs_abc[j]);
                    break;
                }
            }
            if(str[i] == 32)
            {
                printf(" ");
            }
        }
        puts("");
    }
    
    

    return 0;
}