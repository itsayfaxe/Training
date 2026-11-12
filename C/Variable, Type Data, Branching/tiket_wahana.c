#include <stdio.h>
int main()
{
    int umur;
    scanf("%d", &umur);

    if (umur < 0)
    {
        printf("Input tidak valid\n");
    }
    else if (umur >= 60)
    {
        printf("25000\n");
    }
    else if (umur >= 13)
    {
        printf("50000\n");
    }
    else if (umur >= 5)
    {
        printf("20000\n");
    }
    else
    {
        printf("gratis\n");
    }
    return 0;
}