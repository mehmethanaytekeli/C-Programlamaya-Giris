#include <stdio.h>
int main()
{
    char harfnotu;
    printf("Harf notu giriniz: [A] [B] [C] [D] [F]\n");
    scanf("%c",&harfnotu);

    switch (harfnotu) {
        case 'A':
            printf("Pekiyi");
            break;
        case 'B':
            printf("iyi");
            break;
        case 'C':
            printf("Orta");
            break;
        case 'D':
            printf("Orta");
            break;
        case 'F':
            printf("Zayif");
            break;
        default:
            printf("hatali islem");
            break;
    }
    return 0;
}