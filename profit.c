#include<stdio.h>

int main(){
    int Selling_Price,Cost_Price;
    int Profit;
    printf("Enter Selling Price\n");
    scanf("%d",&Selling_Price);
    printf("Enter Cost Price \n");
    scanf("%d",&Cost_Price);
    Profit=Selling_Price-Cost_Price;
    printf("Your Profit Is %d\n",Profit);
    int Profit_Percentage=(Profit/Cost_Price)*100;
    printf("Your profit percentage Is %d\n",Profit_Percentage);
    return 0;
}