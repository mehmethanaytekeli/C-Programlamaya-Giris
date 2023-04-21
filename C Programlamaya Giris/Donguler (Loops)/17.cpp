#include <stdio.h>
int main(){

    char birinci = 'a';
    char  ikinci = 'A';
    while(birinci <= 122)
    {
        printf("%c,%c \n",birinci,ikinci);
        birinci++;
        ikinci++;
    }
}