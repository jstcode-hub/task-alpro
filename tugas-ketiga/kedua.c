#include <stdio.h>

int main()
{
    int i, n;

    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &i);

    for (n = 1; n <= i; n++)
    {
        printf("%d\n", n);
    }
}