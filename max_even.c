#include <stdio.h>
int main()
{
    int n, i, j;
    int sum = 0, new_max = 0;
    scanf("%d", &n);
    int num[10];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int max = num[0];
    for (i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (max > num[i])
        {
            new_max = num[i] + max;
            if (new_max % 2 == 0)
            {
                if (new_max > sum)
                {
                    sum = new_max;
                }
            }
        }
    }
    if (sum == 0)
    {
        max = 0;
        for (i = 0; i < n; i++)
        {
            if (num[i] % 2 == 0)
            {
                if (num[i] > max)
                {
                    max = num[i];
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            if (max != num[i])
            {
                new_max = num[i] + max;
                if (new_max % 2 == 0 && new_max > sum)
                {
                    sum = new_max;
                }
            }
            else if (max > num[i])
            {
                sum = max;
            }
        }
        // printf("%d\n", sum);
    }
    printf("%d\n", sum);
    return 0;
}