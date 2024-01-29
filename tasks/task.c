#include <stdio.h>
#include <stdlib.h>

// argv[1] - num1
// argv[2] - num2

int main(int argc, char *argv[]) {
    int num1, num2;

    if (argc != 3) {
        printf("Usage: ./task <num1> <num2>\n");
        return 0;
    }

    if (atoi(argv[1]) >= 1 && atoi(argv[2]) >= 1) {
        num1 = atoi(argv[1]);
        num2 = atoi(argv[2]);
    }
    else {
        printf("Usage: ./task <num1> <num2>\n");
        printf("Enter integers only\n");
        return 0;
    }

    
    

    // Prompt the user for input
    /*printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);*/

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
