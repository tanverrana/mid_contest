#include <stdio.h>
int main()
{
    int t, i, j, n;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        int count = 0;
        scanf("%d", &n);
        char num[n + 1];
        scanf("%s", num);
        for (j = 0; j < n; j++)
        {

            if ((num[j] == '0' && num[j + 1] == '1') || (num[j] == '1' && num[j + 1] == '0'))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}