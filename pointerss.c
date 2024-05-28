#include <stdio.h>

int main() {
    float price = 100.00;
    float *ptr = &price;

    printf("ptr = %p\n", (void *)ptr);

    ptr++;

    printf("ptr = %p\n", (void *)ptr);

    ptr--;

    printf("ptr = %p\n", (void *)ptr);

    return 0;
}