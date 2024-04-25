#include <stdio.h>

int main()
{
    char status;
    int gaji_pokok = 0;
    int tunjangan_kesehatan = 300000;
    int tunjangan_anak = 0;
    int tunjangan_istri_suami = 0;
    int jumlah_anak = 0;

    // Input status pernikahan
    printf("Masukkan status pernikahan (b: belum menikah, m: menikah, d: duda/janda): ");
    scanf(" %c", &status);

    // Proses perhitungan gaji berdasarkan status pernikahan
    if (status == 'b')
    {
        gaji_pokok = 2000000;
    }
    else if (status == 'm')
    {
        gaji_pokok = 3000000;
        printf("Masukkan jumlah anak: ");
        scanf("%d", &jumlah_anak);
        if (jumlah_anak >= 3)
        {
            tunjangan_anak = 500000;
            tunjangan_istri_suami = 250000;
        }
        else if (jumlah_anak < 3 && jumlah_anak > 0)
        {
            tunjangan_anak = 200000;
        }
    }
    else if (status == 'd')
    {
        gaji_pokok = 3000000;
        printf("Masukkan jumlah anak: ");
        scanf("%d", &jumlah_anak);
        if (jumlah_anak >= 3)
        {
            tunjangan_anak = 300000;
        }
        else if (jumlah_anak < 3 && jumlah_anak > 0)
        {
            tunjangan_anak = 100000;
        }
    }

    // Hitung total gaji
    int total_gaji = gaji_pokok + tunjangan_kesehatan + tunjangan_anak + tunjangan_istri_suami;

    // Tampilkan total gaji
    printf("Total gaji bersih: Rp %d\n", total_gaji);

    return 0;
}
