#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // Initialize variables
  char *input_file = NULL;
  char *user_logic = NULL;
  int result = 0;

  // Get the input file name from the user
  printf("Enter the input file name: ");
  fgets(input_file, 256, stdin);
  input_file[strlen(input_file) - 1] = '\0';

  // Read the input file
  FILE *fp = fopen(input_file, "r");
  if (fp == NULL) {
    printf("Error opening input file\n");
    return 1;
  }

  // Get the user logic from the input file
  while (fgets(user_logic, 256, fp) != NULL) {
    // Check if the line contains ADD()
    if (strstr(user_logic, "ADD(") != NULL) {
      // Parse the line to get the two numbers to add
      int num1, num2;
      sscanf(user_logic, "ADD(%d,%d)", &num1, &num2);

      // Add the two numbers
      result = num1 + num2;

      // Print the result
      printf("The result is %d\n", result);
    }
  }

  // Close the input file
  fclose(fp);

  // Loop forever, expecting input text code having ADD() and user logic
  while (1) {
    printf("Enter input text code having ADD() and user logic: ");
    fgets(user_logic, 256, stdin);
    user_logic[strlen(user_logic) - 1] = '\0';

    // Check if the user wants to quit
    if (strcmp(user_logic, "quit") == 0) {
      break;
    }

    // Check if the line contains ADD()
    if (strstr(user_logic, "ADD(") != NULL) {
      // Parse the line to get the two numbers to add
      int num1, num2;
      sscanf(user_logic, "ADD(%d,%d)", &num1, &num2);

      // Add the two numbers
      result = num1 + num2;

      // Print the result
      printf("The result is %d\n", result);
    }
  }

  // Return 0 to indicate success
  return 0;
}