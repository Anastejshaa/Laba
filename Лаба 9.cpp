#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int min = arr[0][0], max = arr[0][0];

    // Знаходимо мінімальний та максимальний елементи масиву
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    // Виводимо результат на екран
    printf("Мінімальний елемент масиву: %d\n", min);
    printf("Максимальний елемент масиву: %d\n", max);

    return 0;
}
//знаходить мінімальний та максимальний елементи двовимірного масиву розміром 3x3, заповненого числами від 1 до 9.
