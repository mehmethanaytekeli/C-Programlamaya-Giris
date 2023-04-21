#include <stdio.h>
int main(){
    int b,c;
    for (int i = 0; i <= 100; ++i) {
        if (i % 2 ==0) {
            b=i*i;
            printf("%d sayisinin karesi %d\n", i, b);
        }
        else {
            c=i *i*i;
            printf("%d sayisinin kupu %d\n", i, c);
        }


    }
    return 0;
}