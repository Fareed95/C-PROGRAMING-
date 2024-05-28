#include <stdio.h>

int main(){
    printf("heloo world\n");
    float a = 7.9 ;
    printf("so the numvber you selected is %f and the number i selected is %d",a,732);
    char b[50] ;
    printf("\nwhat is your name ?: ");
    scanf(" %[^\n]",b);
    printf("\nokay welcome! %s", b);
    return 0;
}   