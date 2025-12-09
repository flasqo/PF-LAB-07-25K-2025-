#include <stdio.h>

int main() {
    int wards[7];
    int total = 0;

    printf("Enter occupancy for 7 wards:\n");
    for(int i = 0; i < 7; i++) {
        printf("Ward %d: ", i+1);
        scanf("%d", &wards[i]);
        total += wards[i];
    }

    printf("\nWard Status:\n");
    for(int i = 0; i < 7; i++) {
        printf("Ward %d: ", i+1);
        if(wards[i] > 10)
            printf("Overcrowded\n");
        else if(wards[i] >= 6)
            printf("Stable\n");
        else
            printf("Underutilized\n");
    }

    printf("\nTotal patients in hospital: %d\n", total);

    printf("Wards needing administrative review:\n");
    for(int i = 0; i < 7; i++) {
        if(wards[i] > 10 || wards[i] < 6)
            printf("Ward %d\n", i+1);
    }

    return 0;
}