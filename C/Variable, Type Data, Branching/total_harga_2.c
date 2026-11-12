#include <stdio.h>
int main()
{
    float const PPN = 0.11;
    float harga;
    int jumlah;

    if (scanf("%f %d", &harga, &jumlah) != 2)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    else if (harga <= 0 || jumlah <= 0)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    float subtotal = harga * jumlah;
    float pajak = subtotal * PPN;
    float total = subtotal + pajak;

    printf("Subtotal: %.2f\n", subtotal);
    printf("PPN 11%%\t: %.2f\n", pajak);
    printf("Total\t: %.2f\n", total);

    return 0;
}