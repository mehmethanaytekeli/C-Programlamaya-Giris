#include <stdio.h>
int main()
{
    int i;
    for (int i = 1; i <=10 ; ++i) {
        if (i%2==0)
            continue;
        printf("sayi degeri =%d\n",i);


    }
    return 0;
}