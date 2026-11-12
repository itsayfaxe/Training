#include <stdio.h>
int main()
{
    int const admin = 5000;
    int const cost1 = 2000;
    int const cost2 = 3500;
    int const cost3 = 5000;

    int m, cost_total;
    if (scanf("%d", &m) != 1)
    {
        printf("Input tidak valid\n");
        return 1;
    }
    if (m > 20)
    {
        cost_total = admin + (cost1 * 10) + (cost2 * 10) + (cost3 * (m - 20));
    }
    else if (m > 10)
    {
        cost_total = admin + (cost1 * 10) + (cost2 * (m - 10));
    }
    else if (m >= 0)
    {
        cost_total = admin + m * cost1;
    }
    else
    {
        printf("Input tidak valid\n");
        return 1;
    }

    int cost_used = cost_total - admin;

    printf("Pemakaian\t: %d m^3\n", m);
    printf("Biaya pemakaian\t: Rp. %d\n", cost_used);
    printf("Biaya admin\t: Rp. %d\n", admin);
    printf("Total\t\t: Rp. %d", cost_total);
    ;
    return 0;
}