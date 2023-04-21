#include <stdio.h>
int main(){
    int a,b,c,d,e=0;
    printf("kac adet sayi girmek istiyorsunuz:");
    scanf("%d",&a);
    for (int i = 0; i <a ; --a){
        printf("%d. sayiyi giriniz:",a);
        scanf("%d",&b);
        if (b>=100){
            c +=b;
            ++e;
        }
        else{

            d+=b;
        }
    }
    printf("100den buyuk sayilerin ortalamasi:%d\n",c/e);
    printf("100den kucuk sayilarin toplami:%d\n",d);
    //printf("a:%d,b:%d,c:%d,d:%d,e:%d",a,b,c,d,e);
    return 0;
}