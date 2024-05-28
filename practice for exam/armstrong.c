#include <stdio.h>
#include <math.h>

// Function prototypes
int countDigits(int num);
int isArmstrong(int num);

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}

// Function definitions
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int n = countDigits(num);

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return (sum == originalNum);
}
