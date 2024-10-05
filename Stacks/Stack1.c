#include <stdio.h>
#include <stdlib.h>
#define NUM_EMPLOYEE 10

int main(int argc, char *argv[]) {
    int Salary[NUM_EMPLOYEE], ICount = 0, gCount = 0, i = 0;
    printf("Enter employee salary (Max 10)\n");

    for (i = 0; i < NUM_EMPLOYEE; i++) {
        printf("\nEnter employee salary: %d - ", i + 1);
        scanf("%d", &Salary[i]);
    }

    getchar();  // To handle the leftover newline character

    for (i = 0; i < NUM_EMPLOYEE; i++) {
        if (Salary[i] < 3000)
            ICount++;
        else
            gCount++;
    }

    printf("\nThere are %d employees with salary more than 3000\n", gCount);
    printf("There are %d employees with salary less than 3000\n", ICount);
    printf("Press ENTER to continue...\n");
    getchar();  // To pause the program

    return 0;
}
