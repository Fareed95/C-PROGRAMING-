#include <stdio.h>

int main(){
    int arr[]= {50,20,80,70,10};
    int temp = 0 ;
    // printf("%d\n", sizeof(arr));
    // printf("%d\n", sizeof(arr[0]));
    int lenght = sizeof(arr)/sizeof(arr[0]);
    printf("elements of array \n");
    for (int i =0  ; i < lenght ; i ++){
        printf("%d ",arr[i]);
        }

    for (int i =0  ; i < lenght ; i ++){
        for (int j =i+1  ;j < lenght ; j++){
            if (arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    } 
    return 0;
}



// 4 bytes ---- 
// arr -- 5 x 4 ---> 20 
//  1 x 4 ---> 4 
// lenght --- 5 



// for loop :
//  i = 0 ..... i < lenght == 5 ---- print (50 )
// i = 1 .... i < lenght = 5 ...  print ( 20 )