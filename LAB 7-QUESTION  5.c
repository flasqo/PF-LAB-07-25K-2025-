#include <stdio.h>

int main() {
    int sections[6];
    int invigilators[6];
    int totalStudents = 0;
    int totalInvigilators = 0;
    int chiefInvigilator = 0;
    printf("Enter number of students in 6 sections:\n");
    for(int i = 0; i < 6; i++) {
        printf("Section %d: ", i+1);
        scanf("%d", &sections[i]);
        totalStudents += sections[i];
        if(sections[i] <= 30)
            invigilators[i] = 1;
        else if(sections[i] <= 60)
            invigilators[i] = 2;
        else
            invigilators[i] = 3;

        totalInvigilators += invigilators[i];
    }

    if(totalStudents > 300) {
        chiefInvigilator = 1;
        totalInvigilators += chiefInvigilator;
    }

    printf("\nSection\tStudents\tInvigilators\n");
    for(int i = 0; i < 6; i++) {
        printf("%d\t%d\t\t%d\n", i+1, sections[i], invigilators[i]);
    }

    if(chiefInvigilator)
        printf("Chief Invigilator assigned.\n");

    printf("\nTotal Invigilators Needed: %d\n", totalInvigilators);

    return 0;
}