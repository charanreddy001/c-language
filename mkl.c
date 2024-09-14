// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i;
    int n;
    // Write C code here
    
    printf("enter number: ");
    scanf("%d",&n);
    printf("EVEN\tODD\n");
for (i=1;i<n;i++){
    if(i%2==0){
        printf("%d\t",i);
    }
    else{
        printf("%d\n",i);
    }
}
    
}