#include <stdio.h>
unsigned long  long int faktoriyelHesapla(int sayi);
int main(){
    int n;
    unsigned long long int faktoriyel;
    printf("Faktoriyeli Hesaplancak Sayıyı Giriniz:");
    scanf("%d",&n);
    faktoriyel= faktoriyelHesapla(n);
    printf("%d sayısının faktoriyeli= %llu",n,faktoriyel);
    return 0;

}
unsigned long  long int faktoriyelHesapla(int sayi){
    if (sayi<=1){
        return 1;
    }
    else{
        return (sayi * faktoriyelHesapla(sayi-1));
    }
}