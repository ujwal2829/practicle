// C program to check number even or add
#include<stdio.h>
void main(){
    int n;
    printf("\n enter an number :->");
    scanf("%d",&n);
    if(n % 2 ==0){
        printf("\n given '%d' is even",n);
    }
    else
        printf("\n given '%d' is odd",n);
}