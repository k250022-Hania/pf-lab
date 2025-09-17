#include <stdio.h>

int main(){
    int num;
    printf("enter an integer between 65 and 90: ");
    scanf("%d", &num);
    if (num >= 65 & num <= 90) {
        printf("%d = %c\n" , num, num);
    } else {
        printf("invalid output! please enter a number between 65 and 90. \n");
    }
    return 0;
}