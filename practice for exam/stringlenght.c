#include <stdio.h>
#include <string.h>

int string_lenght(char str[]){
    int lenght = 0;

    while(str[lenght]!='\0'){
        lenght++;
    }
    return lenght;
}
int main(){
    char str[] = "hello world";
    string_lenght(str);
    printf("%d", string_lenght(str));

    return 0;
}