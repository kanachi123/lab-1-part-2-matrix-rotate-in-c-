#include <stdio.h>
#include <stdbool.h>
#define N 7
 
void fill_Array(int rows,int array[]){
    
    printf("ներմուծեք վեկտորի տարրերը\n");
    for(int i = 0;i < rows;i++){
        
            scanf("%d",&array[i]);
        
    }
    
}

bool is_repeated(int arr[], int size, int elem) {
  
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == elem) {
      count++;
    }
  }
  
  return count > 1;
}


void create_unique_array(int arr[], int size, int unique_arr[], int* new_size) {
  
  for (int i = 0; i < size; i++) {
    unique_arr[i] = 0;
  }
  
  int index = 0;
  
  for (int i = 0; i < size; i++) {
    
    if (!is_repeated(arr, size, arr[i])) {
      unique_arr[index] = arr[i];
      index++;
    }
  }
  
  *new_size = index;
}

void print_array(int arr[], int size) {
  printf("[");
  for (int i = 0; i < size; i++) {
    
    if (arr[i] != 0) {
      printf("%d", arr[i]);
      if (i < size - 1) {
        printf(", ");
      }
    }
  }
  printf("]\n");
}


int main() {
  
  //int arr[] = {5, -3, 7, -3, -1, -1, -3};
  //hin 5,-3,7 ...
  //nor 5,7
  int arr[N];
  fill_Array(N,arr);
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printf("սկզբնական:");
  print_array(arr, size);  int unique_arr[size];
  
  int new_size;
  create_unique_array(arr, size, unique_arr, &new_size);
  
  printf("նոր։");
  print_array(unique_arr, new_size);
  return 0;
}

