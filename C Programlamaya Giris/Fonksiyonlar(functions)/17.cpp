#include <stdio.h>
void fonksiyon1();
void fonksiyon2();
int i1,i2 =50;
int main(){
    printf("i1 = %d\n",i1);
    printf("i2 = %d\n",i2);

    fonksiyon1();
    fonksiyon2();
    return 0;

}
void fonksiyon1(){
    printf("i1 = %d\n",i1);
    printf("i2 = %d\n",i2);

}
void fonksiyon2(){
    int i1 = 20;
    printf("i1 = %d\n",i1);
}
