#include <stdio.h>
#include <string.h> // Untuk menggunakan fungsi strcmp()

int main()
{
    char hariPemesanan[20];
    char jenisAnggota[20];
    int hargaMakanan;
    int hargaMinuman;

    printf("Masukkan hari pemesanan: ");
    scanf("%s", hariPemesanan); // Gunakan %s untuk membaca string

    printf("Masukkan jenis anggota (anggota/non-anggota): ");
    scanf("%s", jenisAnggota); // Gunakan %s untuk membaca string

    // Membandingkan string menggunakan fungsi strcmp()
    if (strcmp(jenisAnggota, "anggota") == 0)
    {
        // Membandingkan string dengan strcmp() dan mengubah menjadi huruf kecil agar case-insensitive
        if (strcmp(strlwr(hariPemesanan), "sabtu") != 0 && strcmp(strlwr(hariPemesanan), "minggu") != 0)
        {
            hargaMakanan = 45000;
            hargaMinuman = 18000;
        }
        else
        {
            hargaMakanan = 40000;
            hargaMinuman = 16000;
        }
    }
    else
    {
        hargaMakanan = 50000;
        hargaMinuman = 20000;
    }

    printf("Harga untuk %s pada hari %s adalah:\n- Harga makanan: Rp.%d/item.\n- Harga minuman: Rp.%d/item.\n", jenisAnggota, hariPemesanan, hargaMakanan, hargaMinuman);

    return 0;
}
