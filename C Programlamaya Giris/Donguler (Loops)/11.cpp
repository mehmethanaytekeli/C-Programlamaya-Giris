#include <stdio.h>
int main()
{
    int a;
    printf("Hangi Gunu Istiyorsunuz\n");
    scanf("%d",&a);

    if (a == 1)
    {
        printf("pazartesi");
    }
    else if (a ==2)
    {
        printf("sali");
    }
    else if (a ==3)
    {
        printf("carsamba");
    }
    else if (a ==4)
    {
        printf("persembe");
    }
    else if (a ==5)
    {
        printf("cuma");
    }
    else if (a ==6)
    {
        printf("hafta sonu");
    }
    else
    {
        printf("yanlis deger girdiniz");
    }
    return 0;
}