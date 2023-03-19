#include <stdio.h>

int main()
{
	char adi[100];
	char soyadi[100];
	float boy, kilo;
	
	printf("Adiniz Giriniz:");
	scanf("%s",adi);
	
	printf("Soyadiniz Giriniz:");
	scanf("%s", soyadi);
	
	printf("Boyunuzu Metre Cinsinden Giriniz:");
	scanf("%f" , &boy);
	
	printf("Kilonuzu Giriniz:");
	scanf("%f",&kilo);
	
	float boyKiloOrani = kilo / (boy * boy);
	//float boyKiloOrani = kilo / boy / boy/;
	//printf("%f", boyKiloOrani);
	
	printf("Adi:%s, Soyadi%s\n Boy:%.2f Kilo:%.2f\n VKI=%.2f" ,adi,soyadi,boy,kilo,boyKiloOrani);
	return 0;
}
