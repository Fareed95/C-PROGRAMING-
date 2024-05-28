#include <stdio.h>

int main() {
    printf("Welcome to astrologers star !!!\n");

    int num;
    printf("Select any number:\n");
    scanf("%d", &num);

    int choice;
    printf("Press 1 for pattern 1\nPress 0 for pattern 2\nPress 2:\n");
    scanf("%d", &choice);

    if (choice == 1) {
        for (int i = 1; i <= num + 1; i++) {
            printf("%*s\n", i, "*");
        }
    } else if (choice == 0) {
        for (int i = -(num - 1); i <= 1; i++) {
            printf("%*s\n", -i, "");
        }
    } else if (choice == 2) {
        for (int i = 1; i <= num + 1; i++) {
            printf("%*s\n", i, "");
        }
        for (int i = -(num - 1); i <= 1; i++) {
            printf("%*s\n", -i, "");
        }
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
