#include<stdio.h>

int isprime(int i){
    if(i <= 1) 
        return 0;
    for(int j = 2; j * j <= i; j++){
        if(i % j == 0)
            return 0; 
    }
    return 1; 
}

int main(){
    int upper, lower;
    
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    
    printf("Prime numbers between %d-%d are:\n", lower, upper);
    for(int i = lower; i <= upper; i++){
        if(isprime(i)){
            printf("%d, ", i);
        }
    }
    
    return 0;
}
