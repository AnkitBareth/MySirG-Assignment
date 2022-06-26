#include<stdio.h>

int main(){
    int a,b,c,avg;
    printf("Enter Three Numbers : \n");
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average of Numbers Is %d\n",avg);
    return 0;
}