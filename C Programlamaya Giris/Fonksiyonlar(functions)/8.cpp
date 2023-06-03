#include <stdio.h>
unsigned long  long int FibonacciHesapla(int sayi);
int main(){
    int n;
    unsigned long long int fibonacci;
    printf("Fibonacci Hesaplancak Sayıyı Giriniz:");
    scanf("%d",&n);
    fibonacci= FibonacciHesapla(n);
    printf("%d sayısının faktoriyeli= %llu",n,fibonacci);
    return 0;

}
unsigned long  long int FibonacciHesapla(int sayi){
    if (sayi==0){
        return 0;
    }
    else if(sayi==1){
        return 1;
    }
    else{
        return (FibonacciHesapla(sayi-1)+ FibonacciHesapla(sayi-2));
    }
}