// Online C compiler to run C program online
#include <stdio.h>

// trying out function prototype
int factorial(int num);

int main() {
    // code to calculate the factorial of any given number
    int num;
    printf("Enter any given number: ");
    scanf("%d", &num);
    
    int fact = factorial(num);
    
    if (fact < 0){
            printf("The factorial of the entered number is undefined");
    }
    else{
            printf("The factorial of %d is %d", num, fact);
    }

    return 0;
}


int factorial(int num){
    int result = 1;
    
    while (num > 1){
        result *= num;
        num--;
    }
    
    return result;
}
