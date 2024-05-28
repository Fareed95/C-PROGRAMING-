#include <stdio.h>

// Function to compute the square root using Newton-Raphson method
double squareRoot(int n) {
    // Initial guess for the square root
    double x = n;
    double epsilon = 0.000001; // Small value for precision

    // Loop until desired precision is achieved
    while ((x * x - n) > epsilon) {
        // Newton-Raphson formula to approximate the square root
        x = (x + n / x) / 2;
        printf(" condition checking :%f",x * x - n );
        printf(" value of x : %f\n", x);
    }

    return x;
}

int main() {
    int number;

    // Input the number
    printf("Enter a number to find its square root: ");
    scanf("%d", &number);
    // Check if the number is a perfect square
    double root = squareRoot(number);

    // Output the square root
    printf("Square root of %d is approximately %.6f\n", number, root);

    return 0;
}





// output :
// Enter a numvber to find its square root : 4 




// Logic 
//  in square root function ---->>> int n ====== int number 
//  n = 4 
// x = n = 4 ...

// 1st iteratuion :
// condition checking ----- (4 x 4) -4 = 12 > epsilon ... condition verified so loop 
//  x = (4 + 4/4)/2 = 5/2 = 2.5   4 + 1/2 == 5/ 2 = 2.5 

// 2nd iteration :
//  condition checking -------  (2.5 x 2.5)- 4 = 2.25 > epsilon .... condition veroifies and loop 
//  x = (2.5 + 4/2.5 )/ 2  === 2.05   


//  3rd iteration 
// condition checking ---- (2.05 x 2.05) -4 ==  0.2 === x 2.00004 === 8 iteration === 2.000000




//  user input -- number = 4 
// in square root function vlue of n is 4 
// x = n == 4.000000

