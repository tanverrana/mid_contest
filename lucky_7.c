#include <stdio.h>
#include <string.h>
int main()
{
    char a[22];
    int n, i, j, k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int flag = 1;
        scanf("%s", a);
        int len = strlen(a);
        for (j = 0, k = len - 1; j < k; j++, k--)
        {
            if (a[j] != a[k])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            if (len > 7)
            {
                printf("Case #2: %c%d%c\n", a[0], len - 2, a[len - 1]);
            }
            else
            {
                printf("Case #3: %s\n", a);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }
    return 0;
}