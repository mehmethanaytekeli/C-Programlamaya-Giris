#include <stdio.h>
int main()
{
    int i;
    int carpim=1;
    int sayi;
    for (int i = 1;  i<=5 ; ++i) {
        printf("%d.sayi girirniz:",i);
        scanf("%d",&sayi);
        carpim=carpim*sayi;
        printf("carpim=%d,carpan=%d,sayac=%d\n",carpim,sayi,i);
        if (carpim>200){
            goto label;
        }
        printf("tanimlietiket tetiklendigi icin burasi calısmadi...\n");

        label:
        printf("carpim=%d",carpim);
        return 0;
    }
}