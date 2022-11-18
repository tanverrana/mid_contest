#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                printf("%d", j);
            }
            else if (i == n)
            {
                printf("%d", n);
            }
            else
            {
                if (j == 1)
                {
                    printf("%d", i);
                }
                else if (j == n)
                {
                    printf("%d", n);
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}