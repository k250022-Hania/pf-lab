#include<stdio.h>
#include<math.h>

int main(){
double a, b, c, discriminant, root1, root2;
printf("enter corfficients a, b and c");
scanf("%if %if %if", &a, &b, &c);

discriminant = b*b-4*a*c;

if  (discriminant > 0) {
root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf , %.2lf\n", root1, root2);
    } else {
        if (discriminant == 0) {
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and equal: %.2lf , %.2lf\n", root1, root2);
        } else {
            printf("Roots are imaginary\n");
        }
}
return 0;
}