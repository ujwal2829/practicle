//c program to accept array number and check occurance of number
#include<stdio.h>
void main(){
    int arr[100],occr=0;
    int i,size,num;
    printf("\n enter size of an array element :->");
    scanf("%d",&size); //take size of the array
    for(i=0;i<size;i++){
        printf("\n enter array element :->");
        scanf("%d",&arr[i]);//entered element are stored in each array variable
    }
    printf("\n check the array element occurance :->");
    scanf("%d",&num);//which number you want to cheack there occurance
    for(i=0;i<size;i++){
        if(arr[i]==num){
            occr++;
        }
    }
    printf("\n the number %d occured in array %d times",num,occr);
}