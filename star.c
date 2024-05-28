#include <stdio.h>

int main(){
    // printf("my name is fareed");
    int user,i ,j, typee,k, user1, num = 1 ;
    printf("SELECT A NUMBER TO HAVE A ROW IN THE PATTERN : ");
    scanf("%d",&user);
    printf("SELECT THE PATTERN YOU WANT : (1,2,3) : ");
    scanf("%d",&typee);
    user == user1 ;
    if(typee ==1){
        for(i=1; i<=user ; i++ ){
        for(j=1;j<=i;j++){
            printf("%d",num);
            num++ ;
        }
        printf("\n");
    }
    }
    else if(typee == 2 ){
        for (i=user; i>=1 ; i--){
            for (j=i;j>=1;j--){
               printf("*");
            }
        printf("\n");
        }
        }
    else if (typee = 3){
        for (i =1; i<=user; i+1){
           for(k = user1; k>=1;k-- ){
              printf(" ");
            }
           for(j=1;j<=i;j+1){
              printf("*");
           } 
           printf("\n");
           user1-1 ;
        }
    }
    
    return 0;

}