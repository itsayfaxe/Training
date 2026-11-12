#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if (a < 1 || b < 1 || c < 1)
    {
        printf("Input tidak valid");
        return 1;
    }
    if (c >= a + b || b >= a + c || a >= b + c)
    {
        printf("Bukan segitiga");
    }
    else if (a == b && a == c)
    {
        printf("Segitiga sama sisi");
    }
    else if ((a == b || b == c || c == a))
    {
        printf("Segitiga sama kaki");
    }
    else if (
        (a * a + b * b == c * c) ||
        (c * c + a * a == b * b) ||
        (c * c + b * b == a * a)
    )
    {
        printf("Segitiga siku-siku");
    }
    else
    {
        printf("Segitiga sembarang");
    }

    return 0;
}