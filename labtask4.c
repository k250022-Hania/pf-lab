#include <stdio.h>

int main (){
    float basic, hra, da, gross;

    printf("enter basic salary:");
    scanf("%f" , &basic);

    hra = 0.10 * basic;
    da = 0.05 * basic;
    gross = basic + hra + da;

    printf("hra = %f\n" , hra);
    printf("da = %.2f\n" , da);
    printf("gross salary = %.2f\n" , gross);

    return 0;
}