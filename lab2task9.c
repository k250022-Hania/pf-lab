#include <stdio.h>

int main() {
    int dept, course;

    printf("Select Department:\n1. DS\n2. SE\n3. AI\n");
    scanf("%d", &dept);

    switch (dept) {
        case 1:
            printf("DS Courses:\n1. Programming\n2. Machine Learning\n3. Data Visualization\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected Programming\n"); break;
                case 2: printf("You selected Machine Learning\n"); break;
                case 3: printf("You selected Data Visualization\n"); break;
                default: printf("Invalid Course\n");
            }
            break;

        case 2:
            printf("SE Courses:\n1. SDLC\n2. Object Oriented Design\n3. testing\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected SDLC\n"); break;
                case 2: printf("You selected Object Oriented Design\n"); break;
                case 3: printf("You selected Testing\n"); break;
                default: printf("Invalid Course\n");
            }
            break;

        case 3:
            printf("AI Courses:\n1. PF\n2. OOP\n3. AP\n");
            scanf("%d", &course);
            switch (course) {
                case 1: printf("You selected PF\n"); break;
                case 2: printf("You selected OOP\n"); break;
                case 3: printf("You selected AP\n"); break;
                default: printf("Invalid Course\n");
            }
            break;

        default: printf("Invalid Department\n");
    }
    return 0;
}