#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n % 3 == 0)
    {
        printf("%lld\n", n / 3);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}