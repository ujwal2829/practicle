//c program to find area and perimeter of rectangle
#include<stdio.h>
void main(){
    int l,w, peri;
    float area;
    printf("\n enter length of the rectangle :->");
    scanf("%d",&l);
    printf("\n enter width of the rectangle :->");
    scanf("%d",&w);

    area = l*w; //length * width = area
    peri = 2*l + 2*w;  // 2(l+b) = perimeter of a  rectangle
    printf("area of the rectangle is '%f' \n perimeter of the rectangle is '%d'",area,peri);
        
}