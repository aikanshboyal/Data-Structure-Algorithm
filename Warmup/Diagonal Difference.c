#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j;
    int pd = 0, sd = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i == j)
                pd = pd + arr[i][j];
            if ((i + j) == (n - 1))
                sd = sd + arr[i][j];
        }
    }
    printf("%d", abs(pd - sd));
    return 0;
}