#include <stdio.h>

int main(){
    int user,i ,j, typee,k, user1;
    printf("SELECT A NUMBER TO HAVE A ROW IN THE PATTERN : ");
    scanf("%d",&user);
    user1 = user ;
    printf("SELECT THE PATTERN YOU WANT : (1,2,3) : ");
    scanf("%d",&typee);
    // printf("%d",user1);
    for (int i = 1; i <= user; i++) {
        // Print spaces before the asterisks
        for (int j = 1; j <= user - i; j++) {
            printf(" ");
        }

        // Print the asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}