#include <stdio.h>
#include <string.h>
int main()
{
    char op[22];
    int a, b, i, len;
    int multi = 0, add = 0, total;
    scanf("%s", op);

    scanf("%d%d", &a, &b);
    for (i = 0; i <= 22; i++)
    {
        if (op[i] == '*')
        {
            int multi1 = 0;
            multi1 = a * b;
            multi = multi + multi1;
        }
        if (op[i] == '+')
        {
            int add1 = 0;
            add1 = a + b;
            add = add + add1;
        }
    }
    total = multi + add;
    printf("%d\n", total);
    return 0;
}