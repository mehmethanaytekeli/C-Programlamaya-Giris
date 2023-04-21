#include <stdio.h>
int main(){
    int deneme = 53;
    short deneme2 = 53;
    long deneme3 = 53;
    long long int deneme4 =53;
    printf("size=%d",sizeof (deneme));
    printf("size=%hd",sizeof (deneme2));
    printf("size=%ld",sizeof (deneme3));
    printf("size=%lld",sizeof (deneme4));
}