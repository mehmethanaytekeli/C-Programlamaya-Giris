#include <stdio.h>
int main() {
    int ders_notları[7][4];
    float ortalama[7];
    int i, j;
    for (int i = 0; i < 7; i++) {
        printf("Ders %d icin sınav sonuclarini girin:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf("%d", &ders_notları[i][j]);

        }


    }
    for (int i = 0; i < 7; i++) {
        int a=0;
        for (int j = 0; j < 4; j++) {
            a +=ders_notları[i][j];

        }
        ortalama[i]=(float)a/4;

    }
    for (int i = 0; i < 7; i++) {
        printf("Ders %d: Ortalama: %.2f,",i+1,ortalama[i]);
        if(ortalama[i]>45){
            printf("Geçti\n");
        } else{
            printf("Kaldı\n");
        }

    }

    return 0;

}