#include <stdio.h>

#define N 3 // Розмірність матриці

int main() {
    int matrix[N][N];
    int i, j, sum = 0;
    
    // Заповнення матриці випадковими числами
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matrix[i][j] = rand() % 10;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Обчислення суми елементів над головною діагоналлю
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            sum += matrix[i][j];
        }
    }
    
    printf("Сума елементів над головною діагоналлю: %d\n", sum);
    
    return 0;
}
