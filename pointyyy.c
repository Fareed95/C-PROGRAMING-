#include <stdio.h>

int main() {
    char star = '*';
    char *ptr = &star;
    printf("ptr = %p\n", (void *)ptr);
    return 0;
}