#include <stdio.h>
int main(){
    int a=1,b,c=0,z;


    while (true){
        if (a==0){
            c--;
            z=b/c;
            printf("Giridiginiz degerlerin ortalamasi:%d",z);

            break;
        }
        else{
            ++c;
            printf("Ortalamsini Almak istediginiz sayilari girin:");
            scanf("%d",&a);
            b+=a;

        }

    }

}