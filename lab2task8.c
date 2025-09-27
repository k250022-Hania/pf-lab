#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, emi;
    int type;

    printf("Enter Loan Amount: ");
    scanf("%lf", &principal);
    printf("Enter Time in years: ");
    scanf("%lf", &time);
    printf("Interest Type (1 = Simple, 2 = Compound): ");
    scanf("%d", &type);

    if (type == 1) {
        printf("Enter annual interest rate: ");
        scanf("%lf", &rate);
        double si = (principal * rate * time) / 100;
        emi = (principal + si) / (time * 12);
        printf("EMI (Simple Interest) = %.2lf\n", emi);
    } else if (type == 2) {
        printf("Enter annual interest rate: ");
        scanf("%lf", &rate);
        double amount = principal * pow((1 + rate / 100), time);
        emi = amount / (time * 12);
        printf("EMI (Compound Interest) = %.2lf\n", emi);
    } else {
        printf("Invalid Interest Type\n");
    }
    return 0;
}