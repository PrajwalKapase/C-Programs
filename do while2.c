#include <stdio.h>

int main() {
    int num, choice;

    do {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num % 2 == 0)
            printf("%d is Even.\n", num);
        else
            printf("%d is Odd.\n", num);

        printf("Do you want to check another number? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}
