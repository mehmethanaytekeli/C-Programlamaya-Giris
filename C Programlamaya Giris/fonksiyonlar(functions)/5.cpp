#include <stdio.h>
#include <stdlib.h>
void cikis(void);
int main(){
    atexit(cikis);
    printf("Program baslıyor\n");
    exit(EXIT_SUCCESS);
    printf("Üst satirda çikiş sinyali Verildi.\n");
    return 0;
}
void cikis(void){
    printf("cikis yapiliyor");
}