#include <stdio.h>
int main()
{
    int n, i, j;
    int sum = 0;
    scanf("%d", &n);
    int num[21];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = num[i] + num[j];
            if (sum % 2 == 0)
            {
                if (sum > max)
                {
                    max = sum;
                }
            }
        }
        if (num[n - 1] % 2 == 0)
        {
            if (max < num[n - 1])
            {
                max = num[n - 1];
            }
        }
        if (num[0] % 2 == 0)
        {
            if (max < num[0])
            {
                max = num[0];
            }
        }
        printf("%d\n", max);
        return 0;
    }