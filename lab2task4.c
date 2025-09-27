#include<stdio.h>
int main(){
    int category, choice;
    printf("online food ordering system");
    printf("enter 1 for food items and 2 for drink menu\n");
    scanf("%d", &category);

    switch (category){
        //food category
        case 1:
        printf("MENU CARD\n");
        printf("1.pasta\n, 2.burger\n, 3.loaded fries\n 4.chicken wrap\n");
        scanf("%d", &choice);

        //food choices
        switch(choice){
            case 1:
            printf("you ordered a pasta");
            break;
            case 2:
            printf("you ordered a burger");
            break;
            case 3:
            printf("you ordered loaded fries");
            break;
            case 4:
            printf("you ordered a chicken wrap");
            break;
        }
        break;

        //drinks category
        case 2:
        printf("1.diet soda\n 2.mint lemonade\n 3.peach iced tea\n 4.french vanilla iced latte\n");
        scanf("%d, &choice");

        //drink choices
        switch(choice){
            case 1:
            printf("you ordered a diet soda");
            break;
            case 2:
            printf("you ordered a mint lemonade");
            break;
            case 3:
            printf("you ordered a peach iced tea");
            break;
            case 4:
            printf("you ordered a french vanilla iced latte");
            break;
        }
        break;
        default: printf("invalid category!");
        break;

    }
    return 0;
}