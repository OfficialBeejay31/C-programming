#include <stdio.h>
// the function to sort the array
void sort(int array[], int size){
  // the for loop to loop through the array
  for(int i = 0; i < size; i++){
    // the for loop that do the comparism and swapping of the numbers if the condition is met
    for(int j = 0; j < size - 1;j++){
      if (array[j] > array[j+1]){
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }    
}

// the function to print the array after it has been sorted
void printArr(int array[], int size){
  for(int j = 0; j < size; j++)
    {
      printf("%d ", array[j]);
    }
}
int main() {
  // trying out bubble sort algorithm

  int array[] = {4,9,6,2,0,7,3,1,8,5};
  int size = sizeof(array)/sizeof(array[0]);

  sort(array, size);
  printArr(array, size);

  return 0;
}
