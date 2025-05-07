// calc.c
// Write a basic C CLI tool: calc.c - it just adds or subtracts two integers.
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

extern int add(int a, int b); // from Rust

int subtract(int a, int b) {
    return a - b;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char operator = argv[2][0];

    switch (operator) {
        case '+':
            printf("%d\n", add(num1, num2));
            break;
        case '-':
            printf("%d\n", subtract(num1, num2));
            break;
        default:
            printf("Invalid operator. Use + or -.\n");
            return 1;
    }

    return 0;
}
