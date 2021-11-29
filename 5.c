#include <stdio.h>
#include <string.h>
#include<ctype.h>
//#include <Windows.h>

//char outbuf[1000];
int main(void)
{
    int x, y;
    int arr1[999][999];
    int arr2[999][999];
    scanf("%d %d", &x, &y);
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            arr1[i][j] += arr2[i][j];
            printf("%d", arr1[i][j]);
        }
    }

    return 0;
}