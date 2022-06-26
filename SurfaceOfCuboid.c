#include<stdio.h>
int main(){
    int l,b,h;
    int area;
    printf("Enter The Leanth,breadth,Hight Of A Cuboid :\n");
    scanf("%d%d%d",&l,&b,&h);
    area=2*(l*b+b*h+h*l);
    printf("Surface Area Of Cuboid is %d\n",area);
    return 0;
}