#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index = 10;

    printf("Attempting to access element at index %d...\n", index);
    int value = arr[index];
    printf("Value at index %d is: %d\n", index, value);

    return 0;
}

