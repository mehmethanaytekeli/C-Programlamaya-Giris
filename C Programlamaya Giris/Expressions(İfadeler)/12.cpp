#include <stdio.h>
int main() {
    int a;
    printf("Hangi Gunu Istiyorsunuz\n");
    scanf("%d", &a);

    switch (a) {
        case 1:
            printf("pazartesi");
            break;
        case 2:
            printf("sali");
            break;
        case 3:
            printf("carsamba");
            break;
        case 4:
            printf("persembe");
            break;
        case 5:
            printf("cuma");
            break;
        case 6:
            printf("hafta sonu");
            break;
        default:
            printf("yanlis deger girdiniz");
            break;





    }
}