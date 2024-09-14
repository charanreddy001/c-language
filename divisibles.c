#include<stdio.h>
void main(){
    int n,count = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= n;i++) {
    if (n % i == 0) {
      count++; 
}
  }
  printf("The number %d has %d divisors.\n", n,count);
}


    
    
