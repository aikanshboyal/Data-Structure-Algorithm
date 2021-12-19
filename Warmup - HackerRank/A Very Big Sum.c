#include <stdio.h>
int main()
{
    int n, i;
    long int ar[11], sum = 0;
    scanf("%d \n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &ar[i]);
        sum = sum + ar[i];
    }
    printf("%ld \n", sum);
}