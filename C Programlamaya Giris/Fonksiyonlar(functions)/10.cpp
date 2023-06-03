#include <ctime>
#include <stdio.h>
#include <stdlib.h>

void tarih(int& yil, int &ay, int &gun) {
    time_t zaman = time(nullptr);
    tm* zamanYapisi = localtime(&zaman);

    yil = zamanYapisi->tm_year + 1900;
    ay = zamanYapisi->tm_mon + 1;
    gun = zamanYapisi->tm_mday;

}
void sonlandirilyor(){
    printf("Program Sonlandiriliyor...");
}

int main() {

    int yil,xyil,ay,gun,xay,xgun;
    tarih(yil,ay,gun);

    printf("Dogum Tarihinizi gun ay yil seklinde sira sira giriniz:\nGun:");
    scanf("%d",&xgun);
    printf("Ay:");
    scanf("%d",&xay);
    printf("Yil:");
    scanf("%d",&xyil);
    if (xyil > yil || (xyil == yil && xay > ay) || (xyil == yil && xay == ay && xgun > gun)) {
        printf("Geçersiz doğum tarihi! Sistem tarihinden daha sonra bir tarih girdiniz.\n");
        atexit(sonlandirilyor);
        exit(EXIT_FAILURE);
    }

    int guncel_yil=yil-xyil;
    int guncel_ay=ay-xay;
    int guncel_gun=gun-xgun;


    printf("%d Gun %d Ay %d Yildir Bu Dunyada Varsiniz\n",abs(guncel_gun),abs(guncel_ay), guncel_yil-1);

    return 0;
}
