#include <stdio.h>
#include <string.h>
#include<ctype.h>
//#include <Windows.h>

//char outbuf[1000];
int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int arr[999] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *arr_ptr = arr;
    int x = 0;
    scanf("%d", &x);
    for(int j = 0; j <= n; j++)
    {
        if(x == arr_ptr[j])
        {
            printf("%d position.\n", j + 1);
            break;
        }else if(j == n)
        {
            printf("none\n");
            break;
        }
    }                                                                       

    return 0;
}