#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int isPalindrome = 1; // Assume the string is a palindrome initially

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0; // If characters don't match, it's not a palindrome
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
