#include <stdio.h>

union Endeks {
    char isim[50];
    char soyisim[50];
    float boy;
    float kilo;
};

struct Bilgi {
    union Endeks bilgi;
};

int main() {
    struct Bilgi kisi[10];

    for (int i = 0; i < 1; i++) {
        printf("%d. Kişi\n", i + 1);
        printf("Ad: ");
        scanf("%s", kisi[i].bilgi.isim);
        printf("Soyad: ");
        scanf("%s", kisi[i].bilgi.soyisim);
        printf("Boy (m): ");
        scanf("%f", &kisi[i].bilgi.boy);
        printf("Kilo (kg): ");
        scanf("%f", &kisi[i].bilgi.kilo);
        printf("\n");
    }

    for (int i = 0; i < 1; i++) {
        float endeks = kisi[i].bilgi.kilo / (kisi[i].bilgi.boy* kisi[i].bilgi.boy);
        printf("---%d. Kişi---\n", i + 1);
        printf("Ad: %s\n", kisi[i].bilgi.isim);
        printf("Soyad: %s\n", kisi[i].bilgi.soyisim);
        printf("Boy: %.2f cm\n", kisi[i].bilgi.boy);
        printf("Kilo: %.2f kg\n", kisi[i].bilgi.kilo);
        printf("Endeks: %.2f\n", endeks);
        printf("\n");
    }

    return 0;
}
