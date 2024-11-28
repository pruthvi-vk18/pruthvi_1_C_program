#include <stdlib.h>
#include <stdio.h>
int main(){
  int n, *arr;
  printf("enter the number of elements:");
  scanf("%d",&n);
  arr = (int*)malloc(n*sizeof(int));
  if (arr == NULL){
    printf("memory allocatin failed\n");
    return 1;
  }
  printf("enter %d elementd:\n",n);
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
  free(arr);
  printf("after free %d",*arr);
  return 0;
}