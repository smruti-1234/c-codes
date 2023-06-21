#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_LENGTH 100

// Function to perform arithmetic operations
float performOperation(float num1, float num2, char operator) {
    float result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            exit(1);
    }
    return result;
}

// Function to parse and evaluate arithmetic expressions
float evaluateExpression(char* expression) {
    float num1, num2, result;
    char operator;

    sscanf(expression, "%f %c %f", &num1, &operator, &num2);
    result = performOperation(num1, num2, operator);
    return result;
}

int main() {
    FILE *inputFile;
    char input[MAX_INPUT_LENGTH];
    float result;
    
    // Open the input file
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Failed to open input file.\n");
        return 1;
    }
    
    // Keep running until "exit" command is received
    while (1) {
        // Read input from the file
        if (fgets(input, MAX_INPUT_LENGTH, inputFile) == NULL) {
            printf("End of input file reached.\n");
            break;
        }
        
        // Remove trailing newline character
        input[strcspn(input, "\n")] = '\0';
        
        // Check for exit command
        if (strcmp(input, "exit") == 0) {
            printf("Exiting interpreter.\n");
            break;
        }
        
        // Evaluate the arithmetic expression and print the result
        result = evaluateExpression(input);
        printf("Result: %.2f\n", result);
    }
    
    // Close the input file
    fclose(inputFile);
    
    return 0;
}

