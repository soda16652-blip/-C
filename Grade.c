#include <stdio.h>

int main() {
    int scores[5];
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = sum / 5.0;

    printf("\nTotal score: %d\n", sum);
    printf("average score: %.2f\n", average);
return 0;
}