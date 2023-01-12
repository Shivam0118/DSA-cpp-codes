#include<stdio.h>
int main(){
    double meal_cost;
    int tip_percent;
    double tip;
    int tax_percent;
    double tax;
    int total_cost;
    
    scanf("%lf",&meal_cost);
    scanf("%d",&tip_percent);
    scanf("%d",&tax_percent);
    
    tip=meal_cost*tip_percent/100;
    tax=tax_percent*tip_percent/100;
    total_cost=(int)(round(meal_cost+tip+tax));
    
    printf("%d",total_cost);
    }
