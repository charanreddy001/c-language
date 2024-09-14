#include<stdio.h>
void main(){
char colour,r,R,g,G,b,B;
printf("enter the colour");
scanf("%c",&colour);

switch(colour){
            case 'R' :
            case 'r' :
            printf("the colour is RED");
            break;

            case 'g' :
            printf("the colour is GREEN");
            break;

            case 'b' :
            printf("the colour is BLUE");
            break;

            default:
            printf("please enter colours i know ");
            break;



        }
}