#include <stdio.h>

int main() {
    int a = 0, c = 0;
    float b = 0,d = 0;
    printf("0-50 arasinda bir sayi giriniz: ");
    scanf("%d", &a);

    c = a;

    while (a >= 0) {
        if (a % 3 == 0) {
            b += a;
            d++;
        }
        a--;
    }
    d--;

    printf("%d sayisinadan 0 sayisina kadar 3 e tam bölünebilen sayilarin ortalamasi: %.2f", c, (b / d));

    return 0;
}
