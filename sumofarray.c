#include <stdio.h>
int main() {
int N;
printf("Enter the number of elements: ");
scanf("%d", &N);
// Declare an array of size N
int arr[N];
// Variable to store the sum of elements
int sum = 0;
// Read N elements from the user and calculate their sum
printf("Enter %d elements:\n", N);
for (int i = 0; i < N; i++){
scanf("%d", &arr[i]);
sum += arr[i];

}
// Calculate the average
float average = (float)sum / N;
// Display the average
printf("Average: %.2f\n", average);
return 0;
}
