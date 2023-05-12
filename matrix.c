#include<stdio.h>
void main(){
    int arr[100][100],transpose[100][100]; 
    int i,j,r,c;
    printf("\n enter row and coloumn size :->");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
           printf("\n enter element a %d , %d :",i+1,j+1);
           scanf("%d",&arr[i][j]);
        }
    }   
    //printing the matrix arr[][]
    printf("\nEntered matrix :\n");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            printf("%d\t",arr[i][j]);
            if(j == c-1){
                printf("\n\t");
            }
        }
    }
    // computing the transpose
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            transpose[j][i] = arr[i][j];
        }
    }
    //printing the transpose
    printf("\n Transpose of the matrix :->\n");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
                printf("%d\t",transpose[i][j]);
                if(j == r-1){
                    printf("\n");
                }
        }
    }
    return 0;
}