#include <stdio.h>


int find_gcd(int num1, int num2 ){
    if (num1==0){
        return num2 ;
    }
    else if (num2 ==0){
        return num1;
    }
    else{
        return find_gcd(num1, num2%num1);
    }
}
int main(){
    int num1 , num2;
    printf("ENTER THE TWO NUMBERS :");
    scanf("%d %d",&num1,&num2 );
    printf("The GCD OF %d and %d is %d ", num1 , num2, find_gcd(num1,num2));
    return 0;
}


/*
now  a == 2 and b == 3 
3 ---> 1, 3  ,,, 2 --> 1, 2  -----> 1 
3%2 ----> 1 
a = 2 b === 4 

*/
