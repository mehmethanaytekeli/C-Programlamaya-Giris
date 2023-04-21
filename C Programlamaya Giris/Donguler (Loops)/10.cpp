#include <stdio.h>
#include <stdbool.h>
int main() {
    int a;

    while (true)
    {
        printf("sayiyi girniz");
        scanf("%d",&a);
        printf("%d sayisini girdiniz\n",a);
        if (a>0){
            printf("%d sayisi pozitif",a);
            break;
        }
        else if (a<0){
            printf("%d sayisi negatiftir",a);
            break;


        }



    }
}