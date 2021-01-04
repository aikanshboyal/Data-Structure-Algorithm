#include <stdio.h>
int main()
{
    int a[3], b[3], i;
    for (i = 0; i < 3; i++)
        scanf("%d ", &a[i]);
    for (i = 0; i < 3; i++)
        scanf("%d ", &b[i]);

    int bp = 0, ap = 0;

    for (i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            ap++;
        if (a[i] < b[i])
            bp++;
    }

    printf("%d %d", ap, bp);
    return 0;
}
