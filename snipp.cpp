#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interpretSnippet(const char* snippet) {
    
    if (strcmp(snippet, "execute_mother_code") == 0) {
        
        int num1 = 5;
        int num2 = 7;
        int sum = num1 + num2;
    
        printf("The sum of %d and %d is %d\n", num1, num2, sum);
        return;  
    }
    
    
    printf("Interpreting: %s\n", snippet);
    
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
        
            break;
        }
        
        snippet[strcspn(snippet, "\n")] = '\0';  
        interpretSnippet(snippet);
    }
    
    fclose(inputFile);
    return 0;
}


