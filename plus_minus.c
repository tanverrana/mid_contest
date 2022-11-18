#include <stdio.h>
int main()
{
    int n, i, count_plus = 0, count_minus = 0;
    int count_1 = 0, count_2 = 0;
    scanf("%d", &n);
    char sign[101];
    scanf("%s", sign);
    for (i = 0; i < n; i++)
    {
        if (sign[i] == '+')
        {
            count_1 = count_1 + 1;
            if (count_1 > count_plus)
            {
                count_plus = count_1;
            }
            if (sign[i + 1] == '-')
            {
                count_1 = 0;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (sign[i] == '-')
        {
            count_2 = count_2 + 1;
            if (count_2 > count_minus)
            {
                count_minus = count_2;
            }
            if (sign[i + 1] == '+')
            {
                count_2 = 0;
            }
        }
    }

    if (count_plus > count_minus)
    {
        printf("%d\n", count_plus);
    }
    else

    {
        printf("%d\n", count_minus);
    }

    return 0;
}