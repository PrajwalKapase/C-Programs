//pointer to pointer
#include <stdio.h>
int main() {
    int a = 42;
    int *p = &a;    // pointer to int
    int **pp = &p;  // pointer to pointer

    printf("Value of a: %d\n", a);
    printf("Value using *p: %d\n", *p);
    printf("Value using **pp: %d\n", **pp);

    return 0;
}
