#include <stdio.h>
int main()
{
    int tahun;
    if (scanf("%d", &tahun) != 1)
    {
        printf("Input tidak valid");
        return 1;
    }
    if (tahun < 1)
    {
        printf("Input tidak valid");
        return 1;
    }
    else if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
    {
        printf("%d adalah tahun kabisat", tahun);
    }
    else
    {
        printf("%d bukan tahun kabisat", tahun);
    }

    return 0;
}