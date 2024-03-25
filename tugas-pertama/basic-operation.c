#include <stdio.h>

float pertambahan(float a, float b)
{
    return a + b;
}

float pengurangan(float a, float b)
{
    return a - b;
}

float perkalian(float a, float b)
{
    return a * b;
}

float pembagian(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Pembagian dengan nol tidak dapat dilakukan.\n");
        return 0;
    }
}

int main()
{
    float num1, num2;
    char op;

    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih salah satu operator di atas ini: (pilih no nya): ");

    scanf("%c", &op);

    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);

    printf("Masukkan angka pertama: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '1':
        printf("Hasil dari pernjumlahan adalah: %.2f\n", pertambahan(num1, num2));
        break;
    case '2':
        printf("Hasil dari pengurangan adalah: %.2f\n", pengurangan(num1, num2));
        break;
    case '3':
        printf("Hasil dari perkalian adalah: %.2f\n", perkalian(num1, num2));
        break;
    case '4':
        printf("Hasil dari pembagian adalah: %.2f\n", pembagian(num1, num2));
        break;
    default:
        printf("Invalid operator.\n");
    }

    return 0;
}