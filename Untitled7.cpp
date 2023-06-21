#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interpretSnippet(const char* snippet) {
    // Check if the snippet is the addition operation
    if (strcmp(snippet, "add") == 0) {
        int num1, num2, sum;
    
        printf("Enter the first number: ");
        scanf("%d", &num1);
    
        printf("Enter the second number: ");
        scanf("%d", &num2);
    
        sum = num1 + num2;
    
        printf("The sum of %d and %d is %d\n", num1, num2, sum);
        return;  // Exit the function after performing addition
    }
    
    // Interpret other snippets
    printf("Interpreting: %s\n", snippet);
    // You can add your own code here to interpret the snippet
    
    // Example: Printing the snippet
    printf("Snippet interpreted: %s\n", snippet);
}

int main() {
    FILE* inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Failed to open the input file.\n");
        return 1;
    }
    
    char snippet[100];
    
    while (1) {
        if (fgets(snippet, sizeof(snippet), inputFile) == NULL) {
            // If end of file is reached, exit the program
            break;
        }
        
        snippet[strcspn(snippet, "\n")] = '\0';  // Remove trailing newline
        
        interpretSnippet(snippet);
    }
    
    fclose(inputFile);
    return 0;
}

