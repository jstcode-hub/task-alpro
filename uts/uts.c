#include <stdio.h>

int main()
{
    int lama_bekerja_bulan, gaji_perbulan, jumlah_anak;
    char memiliki_istri;

    // Input data karyawan
    printf("Masukkan lama bekerja (dalam bulan): ");
    scanf("%d", &lama_bekerja_bulan);
    printf("Masukkan gaji perbulan: ");
    scanf("%d", &gaji_perbulan);
    printf("Apakah memiliki istri? (y/n): ");
    scanf(" %c", &memiliki_istri);
    printf("Masukkan jumlah anak: ");
    scanf("%d", &jumlah_anak);

    // Hitung jumlah THR pokok
    int thr_pokok;
    if (lama_bekerja_bulan >= 12)
    {
        thr_pokok = gaji_perbulan; // 100% gaji perbulan
    }
    else
    {
        thr_pokok = (lama_bekerja_bulan * gaji_perbulan) / 12; // (lama bekerja / 100) kali gaji perbulan
    }

    // Potongan pajak THR
    float pajak = 0.05; // 5% pajak
    thr_pokok -= thr_pokok * pajak;

    // Potongan BPJS THR
    float potongan_bpjs = 0.10; // 10% potongan BPJS
    thr_pokok -= thr_pokok * potongan_bpjs;

    // Tambahan THR istri
    if (memiliki_istri == 'y' || memiliki_istri == 'Y')
    {
        thr_pokok += 150000;
    }

    // Tambahan THR anak
    thr_pokok += jumlah_anak * 50000;

    // Tampilkan total THR yang diterima
    printf("Total THR yang diterima: Rp %d\n", thr_pokok);

    return 0;
}
