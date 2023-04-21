#include <stdio.h>
int a,b,c=0,d=0,e=0,f=0;
float j,k;
int main()

{
    printf("kac tane sayi hesaplamak istersiniz");
    scanf("%d",&a);
    while (a>0)
    {
        printf("%d . sayiyi giriniz:\n",a);
        scanf("%d",&b);
        a--;
        if (b>=100) {
            c += b;
            e++;
        }
        else{
            d+=b;
            f++;
        }

    }
    j=(float)c/e;
    k=(float)d/f;

    printf("100den kucuk sayilarin toplami :%d\n",d);
    printf("100den buyuk sayilarin ortalamasi :%.2f",j);



    return 0;
}