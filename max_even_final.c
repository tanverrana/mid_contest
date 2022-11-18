#include <stdio.h>
int main()
{
    int n, i, j, max = 0, sum = 0;
    scanf("%d", &n);
    int num[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            max = num[i];
        }
    }
    for (i = 1; i < n; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            sum = num[i] + num[j];
            if (sum % 2 == 0 && sum >= max)
            {
                max = sum;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}