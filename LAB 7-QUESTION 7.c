#include <stdio.h>

int main() {
    float mileage[8];
    int needsMaintenanceCount = 0;

    printf("Enter mileage (km/litre) for 8 vehicles:\n");
    for(int i = 0; i < 8; i++) {
        printf("Vehicle %d: ", i+1);
        scanf("%f", &mileage[i]);
    }

 
    printf("\nVehicle\tMileage\tCategory\n");
    for(int i = 0; i < 8; i++) {
        printf("%d\t%.2f\t", i+1, mileage[i]);
        if(mileage[i] >= 18)
            printf("Efficient\n");
        else if(mileage[i] >= 12)
            printf("Average\n");
        else {
            printf("Needs Maintenance\n");
            needsMaintenanceCount++;
        }
    }

    if(needsMaintenanceCount > 3)
        printf("\nFleet Efficiency Alert!\n");

    return 0;
}