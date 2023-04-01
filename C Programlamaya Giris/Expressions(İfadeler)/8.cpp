#include <stdio.h>

int main()
{
    int x,y;
    printf("sırsayıla x ve y değerlerini giriniz\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("x=%d,y=%d\n",x,y);
    if (x==y)
    {
        printf("x ve y degiskenlerinin degerleri birbirine esittir!");

    }
    else
    {
        printf("x ve y degiskenlerinin degerleri birbirine esit degildir!");
    }
    return 0;
}