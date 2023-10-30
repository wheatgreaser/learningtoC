#include <stdio.h>
#include <stdlib.h>

int tempy=0;
void swap(int *a, int *b){
  int tempy = *a;
  *a = *b;
  *b = tempy;
}
int main() {
  int arr[] = {0, 1, 2, 3, 4};
  int i = 0; int j=0; 
  for(i = 0; i< 5; i++){
    for(j=1; j < (5-i); j ++){
      if(arr[j - 1] < arr[j]){
        
        swap(&arr[j], &arr[j -1]); 
        
        
      }
      
    }
    
  }
  for(i = 0; i < 5; i++){
    printf("%d \n", arr[i]);
  }
  return 0;
}