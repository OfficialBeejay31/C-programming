#include <stdio.h>

int main(){
    
    int age = 21;
    printf("The age is %d\n", age);
    
    // the memory address where the value of age is being stored
    printf("The memory address: %p\n", &age);
    
    // when you save the memory address of a variable in another variable, the variable is called a pointer
    
    int *pAge = &age;
    printf("The value of the variable the pointer is pointing to: %d\n", *pAge);
    // dereferencing of a pointer
    // dereferencing a pointer means accessing the value stored in the variable that the pointer is pointing to
    
    
    printf("The memory address the pointer is pointing to is : %p", pAge);
    
    
    return 0;
}
