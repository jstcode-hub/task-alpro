#include <stdio.h>

int main()
{
    float ipk;
    int tahun;

    // Input nilai IPK
    printf("Masukkan nilai IPK: ");
    scanf("%f", &ipk);

    // Input lama studi dalam tahun
    printf("Masukkan lama studi dalam tahun: ");
    scanf("%d", &tahun);

    // Memeriksa apakah IPK memenuhi kriteria untuk mendapatkan predikat
    if (tahun <= 4)
    {
        if (ipk >= 3.51)
        {
            printf("Predikat: Cumlaude\n");
        }
        else if (ipk >= 3.50 && ipk <= 3.75)
        {
            printf("Predikat: Sangat Memuaskan\n");
        }
        else if (ipk >= 2.75 && ipk <= 2.00)
        {
            printf("Predikat: Memuaskan\n");
        }
        else
        {
            printf("Tidak memenuhi kriteria untuk mendapat predikat.\n");
        }
    }
    else
    {
        printf("Tidak memenuhi kriteria untuk mendapat predikat karena lama studi lebih dari 4 tahun.\n");
    }

    return 0;
}
