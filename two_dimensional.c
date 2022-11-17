#include <stdio.h>
int main()
{
    int a, b, i, j;
    scanf("%d%d", &a, &b);
    int matrix[a][b];
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == i && matrix[i][j] == j)
            {
                matrix[i][j] = matrix[i][j] + 3;
            }
            else if (matrix[i][j] == i)
            {
                matrix[i][j] = matrix[i][j] + 2;
            }
            else if (matrix[i][j] == j)
            {
                matrix[i][j] = matrix[i][j] + 1;
            }
        }
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= b; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}