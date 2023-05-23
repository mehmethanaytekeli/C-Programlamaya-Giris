#include <stdio.h>
int main(){
    int sayi_dizisi[10] = {87,90,64,61,18,27,16,10,11,4};
    for (int i = 0; i < 10; i++) {
        printf("%d. sayi %d \n", i + 1, sayi_dizisi[i]);
    }
    const int sabit =3;
    printf("dizinin %d. elemani =%d\n",sabit+1,sayi_dizisi[sabit]);
    sayi_dizisi[3]=99;
    printf("dizinin %d. elemani = %d \n",sabit+1,sayi_dizisi[sabit]);
    printf("dizinin boyutu = %d",sizeof(sayi_dizisi));
    return 0;



}