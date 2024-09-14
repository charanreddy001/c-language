#include<stdio.h>
#include<stdlib.h>
void main(){
int i,j,m,n,p,q,k;
printf("Enter no.of rows and columns");
scanf("%d%d",&m,&n);
printf("ebter	 no.of rows and coloumns in 2nd matrix:");
scanf("%d%d",&p,&q);
if(n!=p){
printf("Mul is not possible");
exit(0);
} 
else{
int a[m][n],b[p][q],mul[m][q];
printf("enter elements of 1st matrix:");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&a[i][j]);}}
printf("enter elements of 2nd matrix:");
for(i=0;i<p;i++){
for(j=0;j<q;j++){
scanf("%d",&b[i][j]);}}
for(i=0;i<m;i++){
for(j=0;j<q;j++){
mul[i][j]=0;
for(k=0;k<p;k++){
mul[i][j]+=(a[i][k]*b[k][j]);
}}}
printf("multiplication of given matrices is:");
for(i=0;i<m;i++){
for(j=0;j<q;j++){
printf("%2d",mul[i][j]);
}printf("\n");
} 
}}