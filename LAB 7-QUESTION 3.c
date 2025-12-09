#include <stdio.h>

int main() {
    int status[15], delay[15];
    int fine[15];
    int totalFine = 0;

    printf("Enter payment status (0 = not paid, 1 = paid) and delay (in months) for 15 students:\n");
    for(int i = 0; i < 15; i++) {
        printf("Student %d - Status (0/1): ", i+1);
        scanf("%d", &status[i]);
        printf("Student %d - Delay (months): ", i+1);
        scanf("%d", &delay[i]);

 
    if(status[i] == 1) {
      fine[i] = 0;
        } else {
    if(delay[i] == 1)
           fine[i] = 500;
      else if(delay[i] >= 2)
                fine[i] = 1000;
            else
                fine[i] = 0;
        }

        totalFine += fine[i];
    }

    printf("\nStudent\tStatus\tDelay\tFine\tRemark\n");
    for(int i = 0; i < 15; i++) {
        printf("%d\t%d\t%d\t%d\t%s\n", i+1, status[i], delay[i], fine[i], (status[i]==1)?"Cleared":"Defaulter");
    }

    printf("\nTotal fine collected: Rs. %d\n", totalFine);

    return 0;
}