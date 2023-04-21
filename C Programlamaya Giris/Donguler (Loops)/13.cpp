#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("ilk degeri giriniz");
    scanf("%d",&a);
    printf("ikinci degeri giriniz");
    scanf("%d",&b);
    printf("ucuncu degeri giriniz");
    scanf("%d",&c);
    printf("dorduncu degeri giriniz");
    scanf("%d",&d);

    if ((a==b) && (a==c) && (a==d))
    {
        printf("tum sayılar esittir\n");
    }
    else if ((a==b) && (a==c))
    {
        printf("uc sayı birbirine esittir(%d,%d,%d)\n",a,b,c);
    }
    else if ((a==b) && (a==d))
    {
        printf("uc sayı birbirine esittir(%d,%d,%d)\n",a,b,d);
    }
    else if ((a==d) && (a==c))
    {
        printf("uc sayı birbirine esittir(%d,%d,%d)\n",a,d,c);
    }
    else if ((b==d) && (b==c))
    {
        printf("uc sayı birbirine esittir(%d,%d,%d)\n",b,d,c);
    }


    if (a == b)
    {
        printf("iki sayi birbirine esittir(%d,%d)\n",a,b);
    }
    else if (a==c)
    {
        printf("iki sayi birbirine esittir(%d,%d)\n",a,c);
    }
    else if (a==d)
    {
        printf("iki sayi birbirine esittir(%d,%d)\n",a,d);
    }
    else if (b==c)
    {
        printf("iki sayi birbirine esittir(%d,%d)\n",b,c);
    }
    else if (b==d)
    {
        printf("iki sayi birbirine esittir(%d,%d)\n",b,d);
    } else if (c == d)
    {
        printf("iki sayi birbirine esittir(%d,%d)\n",c,d);
    }

    /*
 if ((a==b) && (a==c) && (a==d))
{
    printf("tum sayılar esittir\n");
}
else if (((a==b) && (a==c)) || ((a==b) && (a==d)) || ((a==d) && (a==c)) || ((b==d) && (b==c)))
{
    printf("uc sayı birbirine esittir\n");
}
else if ((a == b) || (a==c) || (a==d) || (b==c) || (b==d) || (c == d))
{
    printf("iki sayi birbirine esittir\n");
}

     */

    if ((a>b) && (a>c) && (a>d))
    {
        printf("en buyuk sayi %d\n",a);
    }
    else if ((b>a) && (b>c) && (b>d))
    {
        printf("en buyuk sayi %d\n",b);
    }
    else if ((c>a) && (c>b) && (c>d))
    {
        printf("en buyuk sayi %d\n",c);
    }
    else
    {
        printf("en buyuk sayi %d\n",d);
    }

    if ((a<b) && (a<c) && (a<d))
    {
        printf("en kucuk sayi %d\n",a);
    }
    else if ((b<a) && (b<c) && (b<d))
    {
        printf("en kucuk sayi %d\n",b);
    }
    else if ((c<a) && (c<b) && (c<d))
    {
        printf("en kucuk sayi %d\n",c);
    }
    else
    {
        printf("en kucuk sayi %d\n",d);
    }
    return 0;

}