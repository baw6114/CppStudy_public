#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    short n = 0;

    loop:
    n = n + 1;
    if(n>0){
        printf("\r short MaximumValue = %d", n);
        goto loop;

    }
    printf("\nOverFlow!!\a\n");
    printf("short MinimumValue = %d",n);
    return 0;
}
