
#include <stdio.h>

#define SIZE 5

int main() {
    int queue[SIZE];
    int front = -1, rear = -1;
    int i, n;

    // Adding elements to the queue
    printf("How many elements do you want to add (1-5)? ");
    scanf("%d", &n);

    if (n < 1 || n > SIZE) {
        printf("Invalid number of elements.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &queue[i]);
        rear++;
    }

    front = 0;

    // Display the queue before deletion
    printf("\nQueue before deletion:\n");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    // Deleting an element from the queue
    if (front == -1 || front > rear) {
        printf("\nQueue is empty. Cannot delete.\n");
    } else {
        printf("\nDeleted element: %d\n", queue[front]);
        front++;

        // Check whether the queue is now empty
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }

    // Display the queue after deletion
    printf("\nQueue after deletion:\n");

    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}
