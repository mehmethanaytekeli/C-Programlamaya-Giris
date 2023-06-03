#include <stdio.h>
float pi=3.14;
float DaireAlani(int yaricap);
int main(void){
    int r = 10;
    float dairenin_cevresi = 2*pi*r;
    printf("Yaricapi %d birim olaqn Dairenin Cevresi = %.2f birimdir\n",r,dairenin_cevresi);
    printf("Yaricapi %d birim olan Dairenin Alani = %.2f birimidir\n",r, DaireAlani(r));
    return 0;
}
float DaireAlani(int yaricap)
{
    float alan = pi*yaricap*yaricap;
    return alan;
}