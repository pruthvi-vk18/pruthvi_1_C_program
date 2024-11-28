#include <stdio.h>
int main(){
  int num,reversed=0,remainder,original;
  //input the number
  printf("Enter a integer:");
  scanf("%d",&num);
  original=num; //store the original number
  //reverse the number
  while(num!=0){
    remainder=num%10;
    reversed=reversed*10+remainder;
    num/=10;
  }
  if(original==reversed){
    printf("%d is a palindrome",original);
  } else {
    printf("%d is not a palindrome",original);
  }
  return 0;
}