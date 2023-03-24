#include <stdio.h>
int main()
{
    printf("**************************\n");
    int sayi1,sayi2,yeni1,yeni2;
    printf("1.Sayiyi Giriniz:");
    scanf("%d", &sayi1);
    printf("2.Sayiyi Giriniz:");
    scanf("%d", &sayi2);

    yeni1 = sayi1*3+5;
    yeni2 = sayi2*2-1;

    printf("1.sayi:%d\n2.sayi:%d\n",yeni1,yeni2);
    printf("**************************");
    return 0;

}