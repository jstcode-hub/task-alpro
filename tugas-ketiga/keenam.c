#include <stdio.h>

int main()
{
    int n;
    int jumlah_ganjil = 0;

    for (int i = 1; i <= 10; i++)
    {
        // Periksa apakah bilangan saat ini adalah ganjil
        if (i % 2 != 0)
        {
            // Jika ganjil, tambahkan ke jumlah_ganjil
            jumlah_ganjil++;
        }
    }

    printf("Jumlah bilangan ganjil dari 1 hingga 10 adalah: %d\n", jumlah_ganjil);

    return 0;
}
