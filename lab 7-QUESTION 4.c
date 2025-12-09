#include <stdio.h>

int main() {
    int units[10];
    float bill[10];
    float totalRevenue = 0;
    int highConsumptionCount = 0;

    printf("Enter weekly electricity units for 10 households:\n");
    for(int i = 0; i < 10; i++) {
        printf("Household %d: ", i+1);
        scanf("%d", &units[i]);


        if(units[i] <= 200) {
   bill[i] = units[i] * 15;
        } else {
    if(units[i] <= 500) {
                bill[i] = units[i] * 20;
            } else {
                bill[i] = units[i] * 25;
            }
        }

        if(units[i] > 700) {
            highConsumptionCount++;
        }

        totalRevenue += bill[i];
    }

    printf("\nHousehold\tUnits\tBill\tRemark\n");
    for(int i = 0; i < 10; i++) {
        printf("%d\t\t%d\t%.2f\t%s\n", i+1, units[i], bill[i], (units[i] > 700) ? "High Consumption" : "Normal");
    }

    printf("\nTotal Revenue: Rs. %.2f\n", totalRevenue);
    printf("Number of houses with high consumption: %d\n", highConsumptionCount);

    return 0;
}