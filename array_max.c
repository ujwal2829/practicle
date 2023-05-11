//program to accept n number in array element find maximum and minimum number 
#include<stdio.h>
void main(){
    int a[100];
    int i,size,max,min;
    printf("\n enter size of en array :->");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("\n enter array element :->");
        scanf("%d",&a[i]);
    }
    max =a[0];
    min =a[0];
    for(i=1;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("\n maximim number is %d",max);
    printf("\n minimum number is %d",min);
}