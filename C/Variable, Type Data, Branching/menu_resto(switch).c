#include <stdio.h>
int main()
{
    int const nasgor = 15000;
    int const mieayam = 12000;
    int const esteh = 5000;

    char kode, status;
    int jumlah, total;
    float diskon = 0;

    scanf("%c", &kode);

    switch (kode)
    {
    case 'A':
    case 'a':
        scanf("%d", &jumlah);
        getchar();
        total = jumlah * nasgor;
        break;

    case 'B':
    case 'b':
        scanf("%d", &jumlah);
        getchar();
        total = jumlah * mieayam;
        break;

    case 'C':
    case 'c':
        scanf("%d", &jumlah);
        getchar();
        total = jumlah * esteh;
        break;

    default:
        printf("Menu tidak valid");
        return 1;
    }
    if (jumlah < 1)
    {
        printf("Jumlah tidak valid\n");
        return 1;
    }
    scanf(" %c", &status);

    int bayar = total;

    if (total >= 50000 && (status == 'Y' || status == 'y'))
    {
        diskon = total * 0.15;
        bayar -= diskon;
    }
    else if (total >= 50000)
    {
        diskon = total * 0.1;
        bayar -= diskon;
    }
    else if (status == 'Y' || status == 'y')
    {
        diskon = total * 0.05;
        bayar -= diskon;
    }

    printf("Total belanja: %d\n", total);
    printf("Anda hemat: %g\n", diskon);
    printf("Bayar\t: %d\n", bayar);

    return 0;
}