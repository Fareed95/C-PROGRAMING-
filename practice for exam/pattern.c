#include <stdio.h>

int pattern (int user){
    int num = 1 ;
    for(int i=1 ; i<=user; i++ ){
        for (int j=1 ; j<=i; j++){
            printf("*");
            num++;

        }
        printf("\n");
    }
}

int main(){
    int user ;
    printf("Enter the value of the rows :");
    scanf("%d", &user);
    pattern(user);
    return 0;
}