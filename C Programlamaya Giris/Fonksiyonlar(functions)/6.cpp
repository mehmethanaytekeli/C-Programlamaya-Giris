#include <stdio.h>
#include <stdlib.h>
void cikis(void);

int main()
{
    atexit(cikis);
    printf("Program Başlatıldı!\n");
    printf("Besten buyuk bir deger giriniz\n");
    int deger;
    scanf("%d",&deger);
    if (deger<5) {
        printf("uygun olmayan bir deger ile karsılasıldı\n");
        exit(EXIT_FAILURE);
    }
    else{
        printf("Girdiğiniz değer uygun olup isleme alınmıstır\n");
    }
    return 0;
}
void cikis(void){
    printf("cıkıs yapılıyor");
}