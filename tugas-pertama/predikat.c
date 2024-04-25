#include <stdio.h>

int main()
{
    float ipk;
    float tahun;

    printf("Masukkan nilai IPK: ");
    scanf("%f", &ipk);

    printf("Masukkan lama studi dalam tahun: ");
    scanf("%f", &tahun);

    if (tahun <= 4)
    {
        if (ipk >= 3.51 && ipk <= 4)
        {
            printf("Predikat: Dengan Pujian\n");
        }
        else if (ipk >= 3.01 && ipk <= 3.50)
        {
            printf("Predikat: Sangat Memuaskan\n");
        }
        else if (ipk >= 2.76 && ipk <= 3.00)
        {
            printf("Predikat: Memuaskan\n");
        }
        else
        {
            printf("Tidak memenuhi kriteria untuk mendapatkan predikat\n");
        }
    }
    else
    {
        printf("Masa studi terlalu lama\n");
    }

    return 0;
}
