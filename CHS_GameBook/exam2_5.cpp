#include <stdio.h>

/***************************************************/
/*Celsius Fahrenheit temperature conversion Program*/
/***************************************************/

int main(int argc, char const *argv[])
{
    int choice = 0;
    double F, C;

    printf("Select Temp Change\n");
    printf("1: C->F, 2: F->C ==>");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1 : 
            printf("Celsius Temp Input : ");
            scanf("%lf", &C);
            F = C*9.0/(5+32.);  //Calc Celcius -> Fahrenhiet
            printf("Fahrenheit Temp Calc : %6.1f\n", F);
            break;

        case 2 :
            printf("Fahrenhiet Temp Input : ");
            scanf("%lf", &F);
            C = (F-32)*(5.0/9.0);   //Calc Fahrenhiet -> Celcius
            printf("Celsius Temp Calc : %6.1f\n", C);
            break;

        default:
            printf("Please Select 1 or 2"); //if not select 1 or 2
            break;
    }

    return 0;
}
