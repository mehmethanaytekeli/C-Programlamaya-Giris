#include <stdio.h>
#include <stdlib.h>
struct endeks{

    char isim[50];
    char soyisim[50];
    float boy;
    float kilo;
};
int main(){
    struct endeks kisi[10];

    for (int i = 0; i < 10; i++) {
        printf("%d. Kisi\n",i+1);
        printf("Ad: ");
        scanf("%s",kisi[i].isim);
        printf("Soyad: ");
        scanf("%s",kisi[i].soyisim);
        printf("Boy(m): ");
        scanf("%f",&kisi[i].boy);
        printf("Kilo(kg): ");
        scanf("%f",&kisi[i].kilo);
        printf("\n");

    }

    for (int i = 0; i < 10; i++) {
        float endekss =kisi[i].kilo/(kisi[i].boy*kisi[i].boy);
        printf("---%d Kisi---\n",i+1);
        printf("Ad: %s\n",kisi[i].isim);
        printf("Soyad: %s\n",kisi[i].soyisim);
        printf("Boy: %.2f\n",kisi[i].boy);
        printf("kilo: %.2f\n",kisi[i].kilo);
        printf("Endeksi: %.2f\n",endekss);
        printf("\n");
        printf("--------------\n");

    }


    return 0;
}
