#include <stdio.h>

int main()
{
    int peminjaman;
    int pendapatan;
    char riwayatKredit;

    printf("Masukkan jumlah peminjaman: ");
    scanf("%d", &peminjaman); // Menggunakan & sebelum variabel

    printf("Masukkan jumlah pendapatan: ");
    scanf("%d", &pendapatan); // Menggunakan & sebelum variabel

    if (peminjaman >= 100000000 && pendapatan >= 20000000)
    {
        printf("Masukkan riwayat kredit: (baik/tidak) ");
        scanf(" %c", &riwayatKredit); // Menggunakan & sebelum variabel dan menambahkan spasi sebelum %c

        if (riwayatKredit == 'b') // Menggunakan karakter tunggal (' ') dan membandingkan dengan 'b'
        {
            printf("Kredit disetujui\n");
        }
        else
        {
            printf("Kredit ditolak\n");
        }
    }
    else if (peminjaman > 50000000 && pendapatan > 15000000)
    {
        printf("Kredit disetujui\n");
    }
    else if (peminjaman < 50000000 && pendapatan >= 10000000)
    {
        printf("Kredit disetujui\n");
    }
    else
    {
        printf("Kredit ditolak\n");
    }

    return 0;
}
