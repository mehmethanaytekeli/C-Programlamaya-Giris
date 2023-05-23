#include <stdio.h>

int toplamTekSayilar(int n) {
    if (n <= 0) {
        return 0;
    } else {
        if (n % 2 != 0) {
            return n + toplamTekSayilar(n - 2);
        } else {
            return toplamTekSayilar(n - 1);
        }
    }
}

int main() {
    int n;
    printf("Bir dogal sayi girin: ");
    scanf("%d", &n);

    int sonuc = toplamTekSayilar(n);
    printf("Tek sayilarin toplami: %d\n", sonuc);

    return 0;
}
