#include <stdio.h>
int main()
{
    int i;
    int toplam=0;
    int sayi;
    int ensonSayac=0;

    for (i = 1; i <=5 ; ++i) {
        printf("bir sayi giriniz sayi%d: ",i);
        scanf("%d",&sayi);
        toplam=toplam+sayi;
        printf("toplam=%d\n",toplam);
        ensonSayac=i;

        if (toplam >100){
            printf("toplam degeri 100 den buyuk dongu sonlandiridi.\n");
            break;

        }

    }
    printf("toplam=%d,en son sayac=%d",toplam,ensonSayac);
    return 0;
}