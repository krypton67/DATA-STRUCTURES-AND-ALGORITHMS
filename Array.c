
#include <stdio.h>
#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {0};
    int choice, row, col, i, j;

    do {
        printf("\n===== 2D ARRAY OPERATIONS =====\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Display the array\n");
        printf("4. Traverse the array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter row (0 to 2): ");
                scanf("%d", &row);
                printf("Enter column (0 to 2): ");
                scanf("%d", &col);

                if (row >= 0 && row < ROWS &&
                    col >= 0 && col < COLS) {
                    printf("Enter the value: ");
                    scanf("%d", &arr[row][col]);
                    printf("Element inserted successfully.\n");
                } else {
                    printf("Invalid row or column.\n");
                }
                break;

            case 2:
                printf("Enter row (0 to 2): ");
                scanf("%d", &row);
                printf("Enter column (0 to 2): ");
                scanf("%d", &col);

                if (row >= 0 && row < ROWS &&
                    col >= 0 && col < COLS) {
                    arr[row][col] = 0;
                    printf("Element deleted (set to 0).\n");
                } else {
                    printf("Invalid row or column.\n");
                }
                break;

            case 3:
                printf("The 2D array is:\n");
                for (i = 0; i < ROWS; i++) {
                    for (j = 0; j < COLS; j++) {
                        printf("%d\t", arr[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Traversing the array:\n");
                for (i = 0; i < ROWS; i++) {
                    for (j = 0; j < COLS; j++) {
                        printf("arr[%d][%d] = %d\n",
                               i, j, arr[i][j]);
                    }
                }
                break;

            case 5:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
