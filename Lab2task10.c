#include <stdio.h>

int main() {
    int age, movie;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12) {
        printf("Category: Child Ticket\n");
    } else if (age <= 60) {
        printf("Category: Adult Ticket\n");
    } else {
        printf("Category: Senior Citizen Ticket\n");
    }

    printf("Select Movie:\n1. horror\n2. sci-fi\n3. comedy\n");
    scanf("%d", &movie);

    switch (movie) {
        case 1: printf("Movie: horror\n"); break;
        case 2: printf("Movie: sci-fi\n"); break;
        case 3: printf("Movie: comedy\n"); break;
        default: printf("Invalid Movie\n");
    }
    return 0;
}