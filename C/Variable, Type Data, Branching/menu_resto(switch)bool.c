#include <stdio.h>
#include <stdbool.h>

int main()
{
    int persen = 0;
    int jumlah, total;
    char menu, status;

    scanf(" %c", &menu);

    switch (menu)
    {
    case 'A':
    case 'a':
        scanf("%d", &jumlah);
        total = jumlah * 15000;
        break;
    case 'B':
    case 'b':
        scanf("%d", &jumlah);
        total = jumlah * 12000;
        break;
    case 'C':
    case 'c':
        scanf("%d", &jumlah);
        total = jumlah * 5000;
        break;
    default:
        printf("Input tidak valid");
        return 1;
    }
    if (jumlah < 0)
    {
        printf("Input tidak valid");
        return 1;
    }

    scanf(" %c", &status);

    bool member = (status == 'Y' || status == 'y');
    if (total >= 50000)
        persen += 10;
    if (member)
        persen += 5;

    int diskon = total * persen / 100;
    int bayar = total - diskon;

    printf("Subtotal: %d\n", total);
    printf("Diskon: %d\n", diskon);
    printf("Total: %d\n", bayar);

    return 0;
}