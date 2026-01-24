//Place your needed include statements here (This is roughly the equivelent of libraries in python)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  //Place your solution code here
  int n;
  printf("Input number of element: ");
  scanf("%d",&n);
  int* arr = (int*)calloc(n,sizeof(int));
  for(int i=0;i<n;i++){
  	printf("Enter value at arr[%d]: ",i);
  	scanf("%d",&arr[i]);
  }

  printf("Array in reverse order: ");
  for(int i=n-1;i>=0;i--){
  	printf("%d  ",arr[i]);
  }

  printf("\n");

  free(arr);
  arr = NULL;
  return 0;
}