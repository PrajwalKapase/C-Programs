//pointer to a variable
#include <stdio.h>
int main() {
    int num = 10;       // normal integer variable
    int *ptr;           // pointer to integer
    ptr = &num;         // store address of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Pointer ptr holds: %p\n", ptr);
    printf("Value at ptr: %d\n", *ptr);

    return 0;
}
