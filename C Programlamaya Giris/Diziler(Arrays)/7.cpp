#include <stdio.h>
int main(){
    int sayılar[8]={5,8,3,2,9,1,6,4};
    int min =sayılar[0];
    int max =sayılar[0];
    for (int i = 0; i <8 ; i++) {
        if (sayılar[i]<min){
            min = sayılar[i];
        }
        if (sayılar[i]>max){
            max = sayılar[i];
        }

    }
    printf("Minimum Eleman: %d\n", min);
    printf("Maksimum Eleman: %d\n", max);

}
