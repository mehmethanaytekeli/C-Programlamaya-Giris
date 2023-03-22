#include <stdio.h>
int main(){
    int y = 6;
    int x = 0;
    printf("x=%d,y=%d\n",x,y);
    x = (y + 5);
    printf("x=%d\n",x);
    x++;
    printf("x=%d\n",x);
    x = y = 0;
    printf("x=%d,y=%d\n",x,y);
    return 0;

}
