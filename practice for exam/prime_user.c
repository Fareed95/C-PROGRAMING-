#include <stdio.h>



int prime(int user){
    int i , isprime = 1;
    for(i = 2 ; i*i<=user;i++){
        if (user%i==0){
            isprime = 0;
            break;
        }
    }
    if (isprime) {
            printf("the number is a prime number");
        }
    else{
        printf("the number is not a prime number");

    }
    return 1 ;
}
int main(){
    int user ;
    printf("enter the number to find whetehr it is prime or not ");
    scanf("%d",&user);
    prime(user);
    return 0;
}