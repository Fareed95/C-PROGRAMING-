#include <stdio.h>

int main(){
    printf("Welcome to astrologer star in C");
    int num;
    printf("select any number");
    const char *str = "*";

    scanf("%d",&num);
    for(int i = 1; i<=num; i++){
        
        printf("%s", str);
    }
    
    return 0;
}