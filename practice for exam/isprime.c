#include <stdio.h>

int main() {
    int i;

    printf("The prime numbers between 100 to 500 are:\n");
    
    for (i = 1; i <= 100; i++) {
        int isprime = 1;  // Reset isprime for each loop and the value of i 
        
        // Check if i is a prime number
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }
        
        // If isprime is still 1, then i is a prime number
        if (isprime) {
            printf("%d\n ", i);
        }
    }

    printf("\n");
    return 0;
}





/*
1. i = 1 condition satisfied ... now  isprime = 1 
j = 2 ... condition will break... 
 so is prime =1 then .... so it is prime 

2. i =2 condition satisfie =d .. now is prime = 1 
j = 2 ... condition willl not work 

3. i =3 condition satisfies .. now isprime = 1 
j = 2 .. will not go in loop 

4. i = 4 .. condition satisfied 
j = 2 .. therefor 2x2 = 4 = 4 ---> so here is 4%2 = 0 isprime = 0 break 

5. i = 5 .. conditioned satisfied.. now isprime = 1 
j =2 ... is prime ,,
*/



/*
Output 
1 
2
3
5
*/

