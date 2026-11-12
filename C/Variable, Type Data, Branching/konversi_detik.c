#include <stdio.h>
int main()
{
    int detik;
    scanf("%d", &detik);

    if (detik < 0)
    {
        printf("Input tidak valid");
        return 1;
    }
    int jam = detik / 3600;
    int sisa_detik = detik % 3600;

    int menit = sisa_detik / 60;
    sisa_detik = detik % 60;

    printf("%d jam %d menit %d detik", jam, menit, sisa_detik);
    return 0;
}