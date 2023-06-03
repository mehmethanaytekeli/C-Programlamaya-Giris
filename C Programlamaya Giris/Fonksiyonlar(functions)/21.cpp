#include <stdio.h>

enum Ay {
    OCAK = 1,
    SUBAT,
    MART,
    NISAN,
    MAYIS,
    HAZIRAN,
    TEMMUZ,
    AGUSTOS,
    EYLUL,
    EKIM,
    KASIM,
    ARALIK
};

struct Yil {
    int yil;
    enum Ay ay;
};

int main() {
    struct Yil yil1;
    yil1.yil = 2023;
    yil1.ay = MART;

    printf("Yıl: %d\n", yil1.yil);
    printf("Ay: %d\n", (int)yil1.ay);

    return 0;
}
