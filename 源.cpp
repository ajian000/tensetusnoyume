#include<stdio.h>
int main()
{
    int a, b, c, n, d, e, f, g;/*这是打印一个菱形的垃圾代码*/
    scanf("%d", &n);
    d = b = (n + 1) / 2;
    g = n;
    if (n < 1)
    {
        printf("Error");
    }
    else if (n % 2 == 0)
    {
        printf("Invalid");
    }
    else
    {
        for (c = 1; c <= b; c++, n -= 2)
        {
            a = (n - 1) / 2, d = 2 * c - 1;
            for (e = 1; e <= a; e++)
            {
                printf(" ");
            }
            for (f = 1; f <= d; f++)
            {
                printf("*");
            }
            for (e = 1; e <= a; e++)
            {
                printf(" ");
            }
            printf("\n");
        }
        n = g;
        for (c = 2; c <= b; c++, n -= 2)
        {
            a = c - 1, d = g - 2 * (c - 1);
            for (e = 1; e <= a; e++)
            {
                printf(" ");
            }
            for (f = 1; f <= d; f++)
            {
                printf("*");
            }
            for (e = 1; e <= a; e++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
}
