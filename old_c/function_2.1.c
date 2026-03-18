#include <stdio.h>
#include <stdbool.h>
#define N 5
 
void fill_Array(int rows,int array[]){
    
    printf("ներմուծեք վեկտորի տարրերը\n");
    for(int i = 0;i < rows;i++){
        
            scanf("%d",&array[i]);
        
    }
    
}
bool has_negative(int arr[], int size) {
  
  for (int i = 0; i < size; i++) {
    
    if (arr[i] < 0) {
      return true;
    }
  }
  
  return false;
}

// առաջին փոքրագույն տարը գտնելու ֆունկցիա

int find_min_index(int arr[], int size) {
    int min_elem = arr[0];
    int min_index = 0;
  
    for (int i = 1; i < size; i++) {
    
        if (arr[i] < min_elem) 
        {
            min_elem = arr[i];
            min_index = i;
        }
  
    }
  
    // վերադարձնում ենք ինդեկսը
    return min_index;
}

int main() {
  
  int arr[N];
  
  fill_Array(N,arr);
  
  int size = sizeof(arr) / sizeof(arr[0]);
  
  if (has_negative(arr, size)) 
  {
    int min_index = find_min_index(arr, size);
    printf("առաջին փոքրագույն տարրի համարը: %d\n", min_index);
  }
  
  else 
  {
    printf("վեկտորում փոգրագույն տարր չկա\n");
  }
  return 0;
}



