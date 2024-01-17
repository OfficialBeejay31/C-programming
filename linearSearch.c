// Online C compiler to run C program online
#include <stdio.h>


int linearSearch(int list[], int target, int size){
    
    for(int i = 0; i < size; i++){
        if (list[i] == target){
            return i;
        }
    }
    printf("size: %d", size);
    return -1;
    
    
}

void verify(int result){

    if(result != -1){
        printf("The target value is at position %d", result);
    }
    else{
        printf("The target value does not exist in the list");
    }
}

int main() {
   
   int list[] = {3,4,7,0,2,1,6,5,8,9};
   int target = 8;
   int size = sizeof(list) / sizeof(list[0]);
   
   int result = linearSearch(list, target, size);
   
   verify(result);
   
    return 0;
}
