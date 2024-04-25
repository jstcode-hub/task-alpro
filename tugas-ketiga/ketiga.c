#include <stdio.h>

int main()
{
    int i, n, j;

    printf("Masukkan angka: ");
    scanf("%d", &i);

    for (n = 1; n <= i; n++)
    {
        j += n;
    }

    printf("Hasil penjumlahan dari 1 sampai %d adalah %d\n", i, j);
}