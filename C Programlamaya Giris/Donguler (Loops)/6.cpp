#include <stdio.h>
int main(){
    int a,b,c;
    printf("totientini hesaplamak istediginiz sayiyi giriniz:");
    scanf("%d",&a);

    while(a>0) {
        if (a % 2 != 0)
            printf("%d", a);
        a--;
    }
        else if(a%3!=0){
            printf("%d",a);
            a--;

        }
        return 0;






}

