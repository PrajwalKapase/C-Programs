#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[50];
    struct Date dob;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &p.dob.day, &p.dob.month, &p.dob.year);

    printf("\n--- Person Info ---\n");
    printf("Name: %s\n", p.name);
    printf("DOB: %02d-%02d-%04d\n", p.dob.day, p.dob.month, p.dob.year);

    return 0;
}
