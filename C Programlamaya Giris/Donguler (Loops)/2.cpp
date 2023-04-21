#include <stdio.h>
int x,faktoriyel=1,y;
int main()
{
    printf("hangi sayinin faktoriyelini almak istersiniz:");
    scanf("%d",&x);
    y=x;


    while(x>=1){
        faktoriyel=faktoriyel*x;
        x -=1;

    }
    printf("%d sayısının faktoriyeli = %d",y,faktoriyel);
    return 0;

}