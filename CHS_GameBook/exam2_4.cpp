#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int i, j, max;

    printf("Input Alphabet One : ");
    scanf("%c", &ch);
    printf(" Input Text : %c(Decimal Num %d)\n", ch, ch);
    printf(" Next Text : %c(Decimal Num %d)\n", ch+1, ch+1);
    printf(" var address : 0x%x\n\n", &ch); //Address Value

    printf(" Input Two Integer : ");
    scanf("%d%d", &i, &j);
    printf(" %d / %d \t= %d\n", i, j, i/j);     //Devide int / int
    printf(" %d %% %d \t= %d\n", i, j, i%j);    //Remainning int / int
    printf(" %d/(double)%d \t= %lf\n", i, j, i/(double)j);   //Devide int / double
    printf(" %d and %d greater val \t= %d\n", i, j, (i>j)?i:j); //Ternary operator 
    printf(" %d | %d \t= %d\n", i, j, i|j); //Bit operator |
    printf(" %d & %d \t= %d\n", i, j, i&j); //Bit operator &
    printf(" %d ^ %d \t= %d\n", i, j, i^j); //Bit operator ^
    printf(" %d >> 2 \t= %d\n", i, i>>2); //Bit operator >>
    printf(" %d << 2 \t= %d\n", i, i<<2); //Bit operator <<

    return 0;
}
