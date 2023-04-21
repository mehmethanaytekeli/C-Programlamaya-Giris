#include <stdio.h>
int z,a,b;
int main()
{
    for(int x=5;x>0;x--){
        printf("%d . sayiyi giriniz:",x);
        scanf("%d",&z);
        if (z<30) {
            a += z;
            b++;
        }
        else{

            printf("30 dan kucuk sayi giriniz\n");
        }


    }
    printf("girdiginiz sayilarin toplarmi:%d\n",a);
    printf("girdiginiz sayilarin adedi:%d",b);


}