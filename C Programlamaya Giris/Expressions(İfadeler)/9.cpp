#include <stdio.h>
int main()
{
    int x,y;
    printf("Sirayla x ve y degerlerini giriniz:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("x=%d,y=%d\n",x,y);
    if (x == y)
    {
        printf("Sonuc: %d = %d\n",x,y);

    }
    else if(x>y)
    {
        printf("Sonuc: %d > %d",x,y);
    }
    else
    {
        printf("Sonuc: %d < %d",x,y);
    }
    return 0;
}
