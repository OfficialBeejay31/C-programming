#include <stdio.h>

int binarySearch(int list[], int target, int size){
    
    int first = list[0];
    int last = list[size - 1];
    while(first <= last){
        int middle = (first + last) / 2;
        
        if (target == list[middle]){
            return 1;
        }
        else if(target > list[middle]){
            first = middle + 1;
        }
        else{
            last = middle - 1;
        }
    }
    
    return -1;
    
}

void verify(int result){
    if (result != -1){
        printf("The target value is in the array\n");
    }
    else{
        printf("The target value is not in the array\n");
    }
    
}

int main(){
    
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int target;
    
    printf("Enter a value to verify: ");
    scanf("%d", &target);
    int size = sizeof(list) / sizeof(list[0]);
    
    
    int result = binarySearch(list, target, size);
    verify(result);
    
    return 0;
}
