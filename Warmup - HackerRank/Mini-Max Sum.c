#include <stdio.h>
int main()
{
    long arr[5], Max[5], sum = 0;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        scanf("%ld ", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (j != i)
                sum = sum + arr[j];
        }
        Max[i] = sum;
        sum = 0;
    }
    long m = Max[0];
    long n = Max[0];
    for (i = 0; i < 5; i++)
    {
        if (Max[i] >= m)
            m = Max[i];
        if (Max[i] <= n)
            n = Max[i];
    }
    printf("%ld %ld ", n, m);
    return 0;
}
