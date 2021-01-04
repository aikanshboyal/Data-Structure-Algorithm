#include <stdio.h>
int main()
{
    int n, arr[100], i;
    scanf("%d ", &n);
    float pos = 0, neg = 0, zero = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else if (arr[i] == 0)
            zero++;
    }
    float pr, nr, zr;
    pr = pos / n;
    nr = neg / n;
    zr = zero / n;

    printf("%f \n%f \n%f ", pr, nr, zr);
    return 0;
}