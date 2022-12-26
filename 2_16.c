#include <stdio.h>
void main()
{
    int n, i, j;
    scanf("%d", &n);
    int count = 2 * n - 3;
    int countx = 2 * n - 1;
    for (i = 1; i <= n + (n / 2 + 1); i++)
    {
        if (i <= n)
        {
            for (j = n; j >= n + 1 - i; j--)
            {
                printf("%d", j);
            }
            for (j = 1; j <= count; j++)
            {
                printf("%d", n + 1 - i);
            }
            count -= 2;
            for (j = (n + 1) - i; j <= n; j++)
            {
                if (i == n && j == 1)
                    continue;
                else
                    printf("%d", j);
            }
            printf("\n");
        }
        else
        {

            for (j = n; j >= i - (n - 1); j--)
            {
                printf("%d", j);
            }
            for (j = 1; j <= 2 * (i - n) - 1; j++)
            {
                printf("%d", i - n + 1);
            }
            for (j = i - n + 1; j <= n; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
    }
    for (i=0;i<2*n-1;i++)
            {
                printf("%d", n);
            }
}
