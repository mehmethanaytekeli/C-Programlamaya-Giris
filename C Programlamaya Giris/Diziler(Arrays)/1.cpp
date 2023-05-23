#include <stdio.h>
int main(){
    char *haftanin_gunleri[7] = {"Pazartesi","Salı","Çarşamba","Perşembe","Cuma","Cumartesi","Pazar"};
    for (int i = 0; i < 7; ++i) {
        printf("%d.gun %s \n",i+1,haftanin_gunleri[i]);


    }
    return 0;
}