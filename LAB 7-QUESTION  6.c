#include <stdio.h>

int main() {
    int posts[10];
    int total = 0;
    float average;
    int maxPosts = 0, maxDay = 0;
    int streakFound = 0;

 
    printf("Enter post counts for 10 days:\n");
    for(int i = 0; i < 10; i++) {
        printf("Day %d: ", i+1);
        scanf("%d", &posts[i]);
        total += posts[i];

    
        if(posts[i] > maxPosts) {
            maxPosts = posts[i];
            maxDay = i+1;
        }
    }

    average = total / 10.0;

    for(int i = 0; i <= 7; i++) {
        if(posts[i] < posts[i+1] && posts[i+1] < posts[i+2]) {
            streakFound = 1;
            break;
        }
    }

    printf("\nWeekly Activity Summary:\n");
    printf("-------------------------\n");
    printf("Daily Posts: ");
    for(int i = 0; i < 10; i++)
        printf("%d ", posts[i]);
    printf("\n");
    printf("Highest Activity: Day %d with %d posts\n", maxDay, maxPosts);
    printf("Average Daily Activity: %.2f posts\n", average);
    if(streakFound)
        printf("A streak of 3 consecutive increasing days was detected.\n");
    else
        printf("No streak of 3 consecutive increasing days found.\n");

    return 0;
}