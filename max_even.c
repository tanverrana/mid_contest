#include <stdio.h>
int main()
{
    int n, i, max = 0;
    int sum = 0, new_max = 0;
    scanf("%d", &n);
    int num[22];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (num[i] >= max)
        {
            max = num[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (max > num[i])
        {
            new_max = num[i] + max;
            if (new_max > sum && new_max % 2 == 0)
            {
                sum = new_max;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}