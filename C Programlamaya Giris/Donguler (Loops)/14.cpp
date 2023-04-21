#include <stdio.h>
int main(){
    char karakter = 'A';
    char metin[] = "bu bir metin atamasidir";
    char *metin2 = "bu metin atamasi isaretci (pointer) ile gerceklestirilmisdir";
    char metin3[80] = "metnin boyutu belirlendi!";
    char metin4[] = {'M','A','T','i','N','4','\0'};
    printf("saklanan karakter \"%c\"karakterdir, \n",karakter);
    printf("saklanan ilk metin \"%s\"karakterdir, \n",metin);
    printf("saklanan ikinci metin \"%s\"karakterdir, \n",metin2);
    printf("saklanan ucuncu metin  \"%s\"karakterdir, \n",metin3);
    printf("saklanan son metin \"%s\"karakterdir, \n",metin4);
    return 0;

}