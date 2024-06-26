// #include <stdio.h>

// struct Waktu
// {
//     int jam;
//     int menit;
// };

// struct Waktu hitungSelisih(struct Waktu waktu1, struct Waktu waktu2)
// {
//     struct Waktu selisih;

//     if (waktu1.jam == 24)
//     {
//         waktu1.jam = 0;
//     }

//     if (waktu2.jam == 24)
//     {
//         waktu2.jam = 0;
//     }

//     if (waktu2.jam > waktu1.jam || (waktu2.jam == waktu1.jam && waktu2.menit > waktu1.menit))
//     {
//         struct Waktu temp = waktu2;
//         waktu2 = waktu1;
//         waktu1 = temp;
//     }

//     selisih.jam = waktu1.jam - waktu2.jam;
//     selisih.menit = waktu1.menit - waktu2.menit;

//     return selisih;
// };

// int main()
// {
//     struct Waktu waktu1, waktu2, hasil;

//     printf("Masukkan waktu pertama: ");
//     scanf("%d %d", &waktu1.jam, &waktu1.menit);

//     printf("Masukkan waktu Kedua: ");
//     scanf("%d %d", &waktu2.jam, &waktu2.menit);

//     hasil = hitungSelisih(waktu1, waktu2);

//     printf("Selisih waktu: %d jam %d menit\n", hasil.jam, hasil.menit);

//     return 0;
// }

#include <stdio.h>

struct Waktu
{
    int jam;
    int menit;
};

struct Waktu hitungSelisih(struct Waktu waktu1, struct Waktu waktu2)
{
    struct Waktu selisih;

    // Menghitung total menit untuk waktu1
    int totalMenit1 = waktu1.jam * 60 + waktu1.menit;

    // Menghitung total menit untuk waktu2
    int totalMenit2 = waktu2.jam * 60 + waktu2.menit;

    // Menghitung selisih total menit
    int selisihTotalMenit = totalMenit2 - totalMenit1;

    // Memastikan selisih total menit positif
    if (selisihTotalMenit < 0)
        selisihTotalMenit += 24 * 60;

    // Mengonversi selisih total menit ke jam dan menit
    selisih.jam = selisihTotalMenit / 60;
    selisih.menit = selisihTotalMenit % 60;

    return selisih;
};

int main()
{
    struct Waktu waktu1, waktu2, hasil;

    printf("Masukkan waktu pertama (jam menit): ");
    scanf("%d %d", &waktu1.jam, &waktu1.menit);

    printf("Masukkan waktu Kedua (jam menit): ");
    scanf("%d %d", &waktu2.jam, &waktu2.menit);

    hasil = hitungSelisih(waktu1, waktu2);

    printf("Selisih waktu: %d menit\n", hasil.jam * 60 + hasil.menit);

    return 0;
}
