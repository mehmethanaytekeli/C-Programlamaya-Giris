#include <stdio.h>

int main() {
    int a, b = 0, e = 0;
    for (int i = 5; i > 0; --i) {
        printf("%d. sayiyi giriniz:", i);
        scanf("%d", &a);
        if (a < 30) {
            e++;
            b += a;
        if (b % 65 == 0 || b % 79 == 0) {
            printf("Kod sonlandiriliyor\n");
            break;
            }
        }
    }
    printf("Toplam %d adet sayi girildi ve bunlardan 30'dan kucuk olanlarin toplami %d'dir.\n", e,b);

    return 0;
}
