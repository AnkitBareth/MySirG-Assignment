#include<stdio.h>
int main(){
    int amount,rate,time;
    int Simple_Interest;
    printf("Enter Amount,Rate,Time To Caculate Simple Interest :\n");
    scanf("%d%d%d",&amount,&rate,&time);
    Simple_Interest=amount*rate*time/100;
    printf("Your Simple interest Is %d",Simple_Interest);
    return 0;

}