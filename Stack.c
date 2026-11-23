
#include <stdio.h>

#define SIZE 5

int main() {
    int stack[SIZE];
    int top = -1;
    int i;

    // PUSH: Add elements to the stack
    printf("Adding elements to the stack:\n");

    for (i = 0; i < SIZE; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &stack[++top]);
    }

    // DISPLAY after adding all elements
    printf("\nStack after adding all elements:\n");

    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }

    // TRAVERSE after adding all elements
    printf("\nTraversing the stack from TOP to BOTTOM:\n");

    for (i = top; i >= 0; i--) {
        printf("stack[%d] = %d\n", i, stack[i]);
    }

    // POP: Remove all elements
    printf("\nRemoving elements from the stack:\n");

    while (top != -1) {
        printf("Removed: %d\n", stack[top]);
        top--;
    }

    // DISPLAY after removing all elements
    printf("\nStack after removing all elements:\n");

    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }

    // TRAVERSE after removing all elements
    printf("\nTraversing the stack after removal:\n");

    if (top == -1) {
        printf("No elements to traverse.\n");
    } else {
        for (i = top; i >= 0; i--) {
            printf("stack[%d] = %d\n", i, stack[i]);
        }
    }

    return 0;
}
