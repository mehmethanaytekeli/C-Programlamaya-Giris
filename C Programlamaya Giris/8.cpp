#include <stdio.h>

int main()
{
	int sayi1, sayi2;
	
	printf("istenilen tam sayilardan birincisi sayinin hex degeriniz giriniz:");
	scanf("%x", &sayi1);
	printf("\nGirilen sayinin tam sayi deðeri: %d", sayi1);
	
	printf("\nIstenilen tam sayilardan ikinci sayinin hex deðerini giriniz:");
	scanf("%x", &sayi2);
	printf("\nGirilen sayinin tam sayi deðeri: %d ", sayi2);
	
	printf("\n Girilen iki sayinin hex toplami: 0x%x\n Girilen sayilarin tam sayi toplami : %d",sayi1+sayi2, sayi1+sayi2);
	return 0;
	}
