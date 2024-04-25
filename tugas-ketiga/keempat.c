#include <stdio.h>

int main()
{
    int i, n;
    float jumlah = 0, rata_rata;

    printf("Masukkan jumlah bilangan: ");
    scanf("%d", &i);

    for (n = 1; n <= i; n++)
    {
        jumlah += n;
    }

    rata_rata = jumlah / i;

    printf("rata-rata: %.2f\n", rata_rata);

    return 0;
}